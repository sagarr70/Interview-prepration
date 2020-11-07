#include<iostream>
using namespace std;

int main(){
    char ch[100][100];
    int n;
    cin>>n;
    cin.get(); 
    for (int i = 0; i < n; i++)
    {
        cin.getline(ch[i],1000);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ch[i]<<" ";
    }
    
    return 0;
}