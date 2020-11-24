/* 
* -> multiplication 5*3=15;
* -> pointer int*ptr;
* -> Dereference any address 
*/
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *xptr;
    xptr=&x;
    cout<<&x<<endl<<xptr<<endl;//20
    cout<<*(xptr)<<endl; //10
    cout<<*(&x)<<endl;//10
    cout<<*(&xptr)<<endl;//20
    cout<<&(*xptr)<<endl;//20
    cout<<&xptr<<endl;
    //double ponter ( A pointer to store the address of a pointer )
     int ** xxptr=&xptr;
    cout<<xxptr;
    return 0;
}