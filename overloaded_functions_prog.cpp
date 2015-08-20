#include <iostream>

using namespace std;

int operate(int a, int b){

  return (a*b);
}

double operate(double a, double b){

  return (a/b);

}

int sum(int a, int b){

  return a+b;
}

double sum(double a, double b){

  return a+b;

}

int main()
{

  cout<<"Example demonstrating overloaded functions."<<endl;
  int x = 5, y = 2;
  
  double n = 5.0, m = 2.0;
  
  cout<< operate(x,y)<<"\n";
  cout<< operate(n,m)<<"\n";


  cout<<sum(10,20)<<endl;
  cout<<sum(1.0,1.5)<<"\n";

  return 0;
}
