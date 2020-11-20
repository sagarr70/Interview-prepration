#include<iostream>
using namespace std;
int a[100000];
void kadanes(int a[],int n)
{
   int maxsum=a[0];
   int currsum=0;
   for (int i = 0; i < n; i++)
   {
       currsum+=a[i];
       maxsum=max(maxsum,currsum);
       if (currsum<0)
       {
           currsum=0;
       }
       
   }
   
cout<<maxsum<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }    
        kadanes(a,n);
    }
    
    return 0;
}