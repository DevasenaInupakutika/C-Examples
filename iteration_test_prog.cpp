//Iteration statements (loops) and Jump statements examples

#include <iostream>
#include <string>

using namespace std;

//While loop syntax and usage
//Countdown using while loop

int main()
{
 
  cout<<"Example of while loop usage."<<endl;
  int n = 10;

  while(n>0){

    cout<<n<<",";
    --n;

}

cout<<"liftoff! \n";

cout<<"Example of do...while loop usage"<<endl;
//Do..while loop syntax and usage

string str;

do{

   cout<<"Enter text: ";

   getline(cin, str);

   cout<<"You entered: "<<str<<"\n";

}while (str!= "goodbye");


cout<<"Example of for loop usage."<<endl;
//For loop usage and syntax

for(int n=10;n>0;n--){

  cout<<n<<",";

}

cout<<"liftoff!\n";

cout<<"Example of range-based for loop."<<endl;
//Range-based for loop

string rstr{"Hello!"};

for(char c:rstr){

  cout<<"["<<c<<"]";

}
cout<<"\n";

//Jump statements syntax and usage
//break leaves the loop, even if the condition for its end is not fulfilled. Can be used as an end to infinite loop.
//Usage of Break in countdown example: Stopping the countdown before its natural end.

cout<<"Example of code implementation using break"<<endl;
for(int n = 10;n>0;n--){
  cout<<n<<",";

  if(n==3){
     cout<<"Countdown aborted!";
     break;

  }
}

//Continue statement syntax
//continue causes the program to skip the rest of the loop in the current iteration, as if the end of the statement block is reached causing it to jump to the start of the following iteration.

cout<<"Example of continue statement usage"<<endl;

for(int n=10;n>0;n--){
   if(n==5) continue;
   cout<<n<<",";
}
cout<<"liftoff!\n";

//goto loop example
//goto makes you to make a jump to another point in the program.
//Label is used as an argument for the goto statement. Label is made of a valid identifier followed by a colon (:).

cout<<"goto loop example"<<endl;

int n1=10;

mylabel:
  cout<<n1<<",";
  n1--;
  
if(n1>0) goto mylabel;
cout<<"liftoff!\n";


return 0;

}
