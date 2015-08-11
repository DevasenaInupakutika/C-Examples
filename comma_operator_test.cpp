#include <iostream>

using namespace std;

int main(){

int b;

int a = (b=3, b+2);

cout<< "a is:"<< a << endl;

cout<< sizeof(a) << endl;

// Checking operator precedence

cout<< (5+7%2)<< endl;

return 0;

}
