#include<bits/stdc++.h>
using namespace std;

class Product {
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    Product(){

    }

    Product(Product &x){
        id = x.id;
        strcpy(name,x.name);
        mrp = x.mrp;
        selling_price = x.selling_price;
    }

    Product(int id,char* n,int mrp,int selling_price){
        this->id = id;
        strcpy(name,n);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }
    void set_mrp(int price){
        mrp = price;
    }

    void set_selling_price(int price){
        if(price < mrp){
            selling_price = mrp;
        }
        else{
            if(price > 0){
                selling_price = price;
            }
        }
    }

    int get_mrp(){ return mrp; }

    int get_selling_price(){ return selling_price; }

    void show_details(){
        cout << "Product id: " << id << endl;
        cout << "Product name: " << name << endl;
        cout << "Product mrp: " << mrp << endl;
        cout << "Product selling price: " << selling_price << endl;
    }

    // deep copy operator overiding
    // Product& operator=(Product &x){
    //     id = x.id;
    //     strcpy(name,x.name);
    //     mrp = x.mrp;
    //     selling_price = x.selling_price;
    //     return *this;
    // }

    ~Product(){
        cout << "We are in destructor" << endl;
        if(name!=NULL){
            delete [] name;
        } 
    };
};

int main() {
    //Write your code here
    char *name;
    cout << "Enter a name for product" << endl; 
    cin.getline(name,100);
    Product hat(100,name,2800,5000);

    Product redhat(hat);
    hat.show_details();  
    redhat.show_details();
    return 0;
}