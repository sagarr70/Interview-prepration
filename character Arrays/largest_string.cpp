#include<iostream>
#include<climits>
#include<cstring>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get();
    int max_len=INT_MIN;
    char ch[1000];
    char max_ch[1000];
        
    
    while (n>0)
    {
       cin.getline(ch,1000);
       int len=strlen(ch);
       if (len>max_len)
       {
              max_len=len;
              strcpy(max_ch,ch);
         }
         
     n--;  
        
    }
    cout<<max_ch<<" "<<max_len;
    return 0;
}