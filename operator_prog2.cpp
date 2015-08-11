#include <iostream>

using namespace std;

int main()
{
  int a = 2, b = 3, c = 6;
  
  cout<< (a==5)<<","<<(a*b >= c)<<","<<(b+4 > a*c) <<","<<((b=2) == a)<<endl;

  cout<<!(5 == 5) <<","<<!(6 <= 4)<<","<<!true<<","<<!false<<endl;

  cout<<((5 == 5) && (3 > 6))<<","<<((5 == 5) || (3 > 6))<<endl;

  //Example demonstrating use of ternary operator

  cout<< (7==5 ? 4 : 3) <<endl;
  cout<< (7==5+2 ? 4 : 3) <<endl;

  cout<< (5>3 ? a : b) <<endl;
  cout<< (a>b ? a : b) <<endl; 

  return 0;

}
