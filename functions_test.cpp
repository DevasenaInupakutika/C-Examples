#include <iostream>

using namespace std;

//Program demonstrating functions.
//Functions allow to structure programs in segments of code to perform individual tasks.

//Addition function
int addition(int a, int b)
{

  int r;
  r = a + b;
  return r;

}

//Subtraction function
int subtraction(int a, int b)
{
  int r;
  r = a - b;
  return r;
}


//Function with no type

void printmessage()
{
  cout<<"I'm a function of void return type."<<endl;
}

//Duplicate function
void duplicate(int& a, int& b, int& c){

  a*=2;
  b*=2;
  c*=2;
}

int main()
{

  int x = 5, y = 3, x1 = 1, y1 = 3, z = 7, z1, z2;
  z1 = addition(x,y); //Passing parameters by values
  z2 = subtraction(7,2);
  
  cout<<"A function can be called multiple times within a program and its argument is naturally not limited just to literals."<<endl;

  cout << "The addition result is "<< z1<<'\n';
  cout << "The first result is " << z2 << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z2= 4 + subtraction (x,y);
  cout << "The fourth result is " << z2 << '\n';

  printmessage();

  duplicate(x1, y1, z);

  cout << "x1=" << x1 << ", y1=" << y1 << ", z=" << z;


return 0;
}
