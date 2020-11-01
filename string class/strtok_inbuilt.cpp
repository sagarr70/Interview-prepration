#include<iostream>
#include<cstring> 
#include<string>
using namespace std;

int main(){
    string a;
    getline(cin,a);

    char s[100];
    strcpy(s,a.c_str());
    char *ptr=strtok(s," ");
    cout<<ptr<<endl;
    while (ptr!=NULL)
    {
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
        
    }
    
    return 0;
}