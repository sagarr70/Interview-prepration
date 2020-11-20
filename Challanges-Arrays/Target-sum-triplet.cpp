#include<iostream>
#include<algorithm>
using namespace std;
void triplesum(int a[],int n,int i,int key)
{
    int start=i+1;
    int end=n-1;
    while (start<end)
    {
        if (a[start]+a[end]==key)
        {
            cout<<a[i]<<", "<<a[start]<<" and "<<a[end]<<endl;
           start++;end--;
        }
       else
       {
           if (a[start]+a[end]<key)
           {
               start++;
           }
           else
           {
               end--;
           }
           
           
       }
       
        
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
   cin>>key; 
   for (int i = 0; i < n-2; i++)
   {   
       triplesum(a,n,i,key-a[i]);
   }
   
    
    return 0;
}