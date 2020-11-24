//Arrays are always passed to function by reference
#include<iostream>
using namespace std;
void array_pass(int b[]) // array_pass(int *b)
{
    
 for (int i = 0; i < 5; i++)
 {
     b[i]+=1;
 }
}
void increment_passbyvalue(int a)
{
    a=a+1;
    cout<<a<<" inside function pass by value"<<endl;
}
void increment_passbyreference(int *aptr)
{
      *aptr=*aptr+1;
      cout<<*aptr<<" inside function pass by reference"<<endl; 
}
int main(){
    int a=10;
    increment_passbyvalue(a);
    cout<<a<<" INSIDE MAIN after pass by value"<<endl;
    increment_passbyreference(&a);
    cout<<a<<" INSIDE MAIN after pass by REFERENCE"<<endl;
 // auto pass by reference for arrays
 int b[]={1,2,3,4,5};
 cout<<"inside main before passing"<<endl;
 for (int i = 0; i < 5; i++)
 {
     cout<<b[i]<<" ";
 }
 cout<<endl;
 array_pass(b);
 cout<<"inside main before passing"<<endl;
 for (int i = 0; i < 5; i++)
 {
     cout<<b[i]<<" ";
 }
    return 0;
}