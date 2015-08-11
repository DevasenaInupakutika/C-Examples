#include <iostream>
#include <string>

using namespace std;

int main(){

int x = -7;

cout<<"Demonstrating control flow statements implementation... "<<endl;

if (x > 0)
  cout<< "x is positive."<<endl;

else if (x < 0)
  cout<< " x is negative."<<endl;

else
  cout<< " x is 0."<<endl;


//While loop syntax and usage
//Countdown using while loop

cout<<"Domonstrating while loop... "<<endl;

int n = 10;

while(n>0){

  cout<< n<<",";
  --n;

}

cout<< "Liftoff! \n";

//Do-While loop syntax and usage
// Behaves like a while loop except that the condition is evaluated after the execution of statement instead of before.

//Implementation of echo machine using do-while loop

string str;

cout<<"Demonstrating do...while loop: "<< endl;

do{
  cout<<"Enter text:";

  getline(cin,str);

  cout<<"You entered: "<<str<<'\n'<< endl;
} while (str != "goodbye");


//For loop syntax and usage.
//Countdown example using for loop.

cout<< "Demonstrating for loop..."<<endl;

for(int n=10;n>0; n--){

   cout<<n<<",";
}

   cout<<"liftoff!\n";

//Range-based for loop
//Range-based for loop using strings

string str2 {"Hello!"};

for (char c : str2){

  cout<<"["<<c<<"]";

}

cout<<"\n";


return 0;

}
