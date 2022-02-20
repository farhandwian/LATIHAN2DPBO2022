#include <iostream>
#include <string>
using namespace std;

class Product{
    // atribut private
    private:
        string price;
        string idProduct;
    
    public:
        //constructor  kosong     
        Product(){
        }
        
        //constructor  kosong     
        Product(string price, string idProduct){
            this->price = price;
            this->idProduct = idProduct;
        }
        
        // set memory price
        void set_price(string price){
            this->price = price;
        }
        // get memory price
        string get_price(){
            return this->price;
        }

        // set memory idProduct
        void set_idProduct(string idProduct){
            this->idProduct = idProduct;
        }
        // get memory product
        string get_idProduct(){
            return this->idProduct;
        }

        // destructor
        ~Product(){
        }
};