#include<iostream>

//function templates

using namespace std;

template <class T>
T sum(T a,T b){

 T result;
 result = a + b;
 return result;

}

//Type template arguments

template <class T, class U>
bool are_equal(T a, U b)
{
 return (a==b);
}

//Non-type template arguments

template <class T, int N>
T fixed_multiply(T val)
{
 return val * N;
}

int main()
{
 int i=5, j=6, k;
 double f=2.0, g=0.5, h;
 k=sum<int>(i,j);
 h=sum<double>(f,g);
 cout<<k<<endl;
 cout<<h<<endl;

 if(are_equal(10,10.0))
   cout<<"x and y are equal."<<endl;
   
 else
   cout<<"x and y are not equal."<<endl;

 cout << fixed_multiply<int,2>(10) << '\n';
 cout << fixed_multiply<int,3>(10) << '\n';

 return 0;
}
