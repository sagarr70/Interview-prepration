#include<iostream>
using namespace std;
int binarysearch(int *start,int *end,int key)
{
   int s=0;
   int e=(end-start)-1;
   while (s<=e)
   {
       int mid=(s+e)/2;
       if (start[mid]==key)
       {
           return mid;
       }
       else
       {
           if (key>start[mid])
           {
               s=mid+1;
           }
           else
           {
               e=mid-1;
           }
           
           
       }
      
       
   }
    return -1;
}
int main(){
    int n;
    cin>>n;
   int *a=new int[n];
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   int key;
   cin>>key;
   cout<<binarysearch(a,a+n,key);
    return 0;
}