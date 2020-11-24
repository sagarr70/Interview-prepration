#include<iostream>
using namespace std;

int main(){
    int x=10;
    cout<<&x<<endl;
    float y=40.5;
    cout<<&y<<endl;
    //it does not work for char variables
    char ch='A';
    cout<<&ch<<endl;
    //explicit Typecasting from char* to void*
    cout<<(void *)&ch<<endl;
    return 0;
}