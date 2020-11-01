#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[1000];
    cin.getline(ch,1000);
    int len=strlen(ch)-1;

    int start=0;
    int flag=0;
    while (start<len)
    {   
        if (ch[start]==ch[len])
        {
            start++;
            len--;
        }
        else
        {   flag=1;
             cout<<"Not pallindrome";
            break;
        }
        
    }
   
    if (flag==0)
    {
       cout<<"pallindrome";
    }
   
    
    return 0;
}