#include <iostream>
using namespace std;

class List;

class Node{
    int data;
    Node* next;
public:
    Node(int d): data(d), next(nullptr) {}

    friend class List;

    ~Node(){
        if(next!=nullptr){
            delete next;
        }
        cout << "Deleting node with data " << data << endl;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(): head(nullptr), tail(nullptr) {}

    void push_front(int d){
        if(head==nullptr){
            head = new Node(d);
            tail = head;
        }
        else{
            Node* temp = new Node(d);
            temp->next = head;
            head = temp;
        }
    }

    void push_back(int d){
        if(head==nullptr){
            head = new Node(d);
            tail = head;
        }
        else{
            Node* temp = new Node(d);
            tail->next = temp;
            tail = temp;
        }
    }

    void print_list(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insert(int d,int pos){
        if(pos == 0){
            push_front(d);
            return;
        }
        
        Node* temp = head;
        for(int jumps = 1; jumps <= pos-1; jumps++){
            temp = temp->next;
        }

        Node* n = new Node(d);
        n->next = temp->next;
        temp->next = n;
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;

        while(temp!=nullptr){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        
        return -1;
    }

    bool isPresent(int key){
        Node* temp = head;
        int idx = 0;

        while(temp!=nullptr){
            if(temp->data == key){
                return true;
            }
            idx++;
            temp = temp->next;
        }

        return false;
    }

    bool recurssiveIsPresent(Node* head,int key){
        if(head==nullptr){
            return false;
        }

        if(head->data == key){
            return true;
        }

        return recurssiveIsPresent(head->next,key);        
    }

    bool recurssiveIsPresentHelper(int key){
        return recurssiveIsPresent(head,key);
    }

    int recurssiveSearch(Node* head,int key){
        if (head == nullptr)
        {
            return -1;
        }

        if (head->data == key)
        {
            return 0;
        }

        int subIndex = recurssiveSearch(head->next, key);

        if(subIndex == -1) return subIndex + 1;

        return subIndex + 1;
    }

    int recurssiveSearchHelper(int key){
        return recurssiveSearch(head,key);
    }

    void reverse(){
        Node* curr = head;
        Node* prev = nullptr;
        Node* N;

        while(curr != nullptr){
            N = curr->next;
            curr->next = prev;
            prev = curr;
            curr = N;
        }

        head = prev;
    }

    ~List(){
        if(head!=nullptr){
            delete head;
            head = nullptr;
        }
    }
};