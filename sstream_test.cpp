#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//Extracting an integer from a string.

int main(){

    string mystr;
    float price = 0;
    int quantity = 0;

    cout<<"Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;

    cout<<"Enter Quantity: ";
    getline(cin,mystr);
    stringstream(mystr)>> quantity;
    
    cout<<"Total price: "<< price*quantity << endl;


return 0;

}
