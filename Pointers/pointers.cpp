#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;
    //initialization with declaration
    int *xptr=&x;
    cout<<&x<<endl<<xptr;
    // Re-assign another address to the variable
    xptr=&y;
    cout<<&y<<endl<<xptr;
    return 0;
}