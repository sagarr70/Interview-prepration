#include<iostream>
using namespace std;

int main(){
    char a[][10]={{'a','b','\0'},{'d','e','f','\0'},"sagar2"};
    char b[][10]={"sagar"};
    char c[10][10];
    c[0][0]='a';
    cout<<a[0]<<endl<<a[1]<<endl<<b[0]<<endl<<a[2];
    cout<<endl<<c[0][0];
    return 0;
}