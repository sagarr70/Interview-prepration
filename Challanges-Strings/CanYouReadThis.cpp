#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='A'&&s[i]<='Z')
        {
            cout<<endl;
        }
        cout<<s[i];
    }
    
    
    return 0;
}