#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char ch=s[0];
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==ch)
        {
            count++;
        }
        else
        {   cout<<ch<<count;
            ch=s[i];
            count=1;
        }
        
        
    }
    cout<<ch<<count;
    return 0;
}