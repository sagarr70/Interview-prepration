#include<iostream>
using namespace std;

int main(){
    int b[]={1,2,3};
    cout<<b<<endl; //prints the address of first element

    char a[10]={'a','b','c','d','e','\0'};
    cout<<a<<endl; //print the content of an array
    char s[]={'h','e','l','l','o'};
    char s1[]="hello";
    
    cout<<s<<" "<<sizeof(s)<<endl;

    cout<<s1<<" "<<sizeof(s1);
    return 0;
}