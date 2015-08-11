#include <iostream>

using namespace std;

int main()
{

  string mystring, mystr;

  //cout<< "The next Statemet will just take a word but not entire statement."<< endl;

  //cin>>mystring;

  //cout<<mystring;

  cout<<"What's your name?";

  getline(cin, mystr);

  cout<<"Hello: "<<mystr<<".\n";

  cout<<"What's your favourite team?";

  getline(cin, mystr);

  cout<<"I like "<<mystr<<" too!\n";

  return 0;


}
