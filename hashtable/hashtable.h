#include<cstring>
using namespace std;

template<typename T>
class Node{
public:
    string key;
    T value;
    Node* next;
    
    Node(string key, T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
private:
    Node<T> ** table;
    int current_size;
    int table_size;

    int hashFunction(string key){
        int index = 0;
        int power = 1;
        for(char ch: key){
            index = (index + ch * power) % table_size;
            power = (power*27) % table_size;
        }
        return index;
    }

    void rehash(){
        Node<T> ** old_table = table;
        int old_table_size = table_size;
        table_size = 2*table_size + 1;
        table = new Node<T>*[table_size];
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }
        current_size = 0;

        // shift the elements from old table to new table
        for(int i = 0; i < old_table_size; i++){
            Node<T> * temp = old_table[i];
            while(temp != NULL){
                insert(temp->key, temp->value);
                temp = temp->next;
            }

            if(old_table[i] != NULL){
                delete old_table[i];
            }
        }

        delete [] old_table;
    }

public:
    Hashtable(int default_size = 7){
        current_size = 0;
        table_size = default_size;
        table = new Node<T>*[table_size];
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T value){
        int index = hashFunction(key);
        Node<T> * n = new Node<T>(key, value);
        // The below code ensures that insertion iss O(1) in the worst case
        n->next = table[index];
        table[index] = n;
        current_size++;

        // rehash
        float load_factor = current_size/(1.0*table_size);
        if(load_factor > 0.7){
            rehash();
        }
    }

    T* search(string key){
        int index = hashFunction(key);
        Node<T> * temp = table[index];
        while(temp != NULL){
            if(temp->key == key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }

    bool isPresent(string key){
        T* value = search(key);
        if(value == NULL){
            return false;
        }
        else{
            return true;
        }
    }


    void erase(string key){
        int index = hashFunction(key);
        Node<T> * temp = table[index];
        Node<T> * prev = NULL;
        while(temp != NULL){
            if(temp->key == key){
                if(prev == NULL){
                    table[index] = temp->next;
                }
                else{
                    prev->next = temp->next;
                }
                temp->next = NULL;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    T& operator[](string key){
        T* value = search(key);
        if(value == NULL){
            // Insert key, value(garbage) in the hashmap
            T garbage;
            insert(key, garbage);
            value = search(key);
        }
        return *value;
    }

    void print(){
        for(int i=0;i<table_size;i++){
            cout<<"Bucket "<<i<<"->";
            Node<T> * temp = table[i];
            while(temp != NULL){
                cout<<temp->key<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
};