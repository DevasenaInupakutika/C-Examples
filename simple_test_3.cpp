// Initialisation of variables

#include <iostream>

// This program illustrates initialising variables in C++
using namespace std;

int main()
{
  int a = 5;
  int b(3);
  int c{2};  //Brace initialisation is introduced in C++ 11 compiler

  int result;

  a = a + b;
  result = a - c;
  std::cout<< result;

  return 0; 
}
