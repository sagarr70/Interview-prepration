#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int len=a.length();
    for (int i = 0; i < len; i++)
    {
        int x=a[i]-'0';
        if (9-x<x)
        {
            x=9-x;
        }
        a[i]=x+'0';
    }
   
    if (a[0]=='0')
    {
        a[0]='9';
    }
    
    for (int i = 0; i < len; i++)
    {  
       cout<<a[i];
    }

    return 0;
}