#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool lexio(string a,string b)
{
    return a+b>b+a;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int n;
    cin>>n;
    cin.get();
        string a[n];
        for (int i = 0; i < n; i++)
        {
            getline(cin,a[i]);    
        }
       sort(a,a+n,lexio);
        
        for (int i = 0; i < n; i++)
        {
            cout<<a[i];
        }
        
    }
    
    return 0;
}