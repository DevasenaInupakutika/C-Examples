#include <iostream>

using namespace std;

int foo; //Global variable

int some_function(){

  int bar; 
  //x1;   //Local variables
  bar = 0;
  //x1 = 0;
  //double x1;
  //x1 = 0.0;
}

int other_function ()
{
  foo = 1;  // ok: foo is a global variable
  //bar = 2;  // wrong: bar is not visible from this function
}

int main()
{
  int x = 10;
  int y = 20;
  {
    int x;   // ok, inner scope.
    x = 50;  // sets value to inner x
    y = 50;  // sets value to (outer) y
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';

 return 0;
}
