#include<iostream>
using namespace std;
bool isvalid(int mid,int n,int x,int y,int m)
{
    int required=mid*x;
    int availabe=(m+((n-mid)*y));
    return required<=availabe;
}
int main(){
     int n,m,x,y;
     cin>>n>>m>>x>>y;
     int start=0;
     int end=n;
     int ans=0;
     while (start<=end)
     {
         int mid=(start+end)/2;
         if (isvalid(mid,n,x,y,m))
         {   ans=mid;
             start=mid+1;
         }
         else
         {
             end=mid-1;
         }
         
         
     }
     cout<<ans;
    return 0;
}