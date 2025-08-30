#include <iostream>
using namespace std;
struct client{
    string  productname;
     int quantity;
     int priceperunit;};
    int main(){
        client p1;
    
cout<<"wellcome sir"<<endl;
cout<<"what do you wanna buy from my shop"<<endl;
cout<<"Enter product name :"<<endl;
cin>> p1.productname;
cout<<"Enter quantity :"<<endl;
cin>>p1.quantity;
cout<<"Enter price per unit :"<<endl;
cin>>p1.priceperunit;
 int totalBill = p1.quantity * p1.priceperunit;

    cout << "\n--- Invoice ---" << endl;
    cout << "Product: " << p1.productname << endl;
    cout << "Quantity: " << p1.quantity << endl;
    cout << "Price per unit: Rs " << p1.priceperunit << endl;
    cout << "Total bill: Rs " << totalBill << endl;

    cout << "Thank you!" << endl;


    return 0;
}