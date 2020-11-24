#include<iostream>
using namespace std;

int main(){
    int x=10;
    //reference variable
    // int &r; and then r=x; not work
    // once reference variable is reffered to some variable then it cannot be reassigned to some other variable
    int &r=x;
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;
    x=100;
    
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;
    r=1000;
    
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;
    int y=10;
    r=y; // it will not refer r to y but change the value at r and x to that in y
    
    
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;
    return 0;
}