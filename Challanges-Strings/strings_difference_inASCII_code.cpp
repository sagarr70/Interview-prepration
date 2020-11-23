#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i <s.length(); i++)
    {   int diff=0;
        if (i<s.length()-1)
        {
            diff=s[i+1]-s[i];
        }

        cout<<s[i];
        if (i<s.length()-1)
        {
            cout<<diff;
        }
        
        
    }
    
    return 0;
}