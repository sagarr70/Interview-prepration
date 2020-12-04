#include<iostream>
#include<algorithm>
using namespace std;
bool cowrakhpaye(int *a,int mid,int c,int n)
{
  int cnt=1;
  int last=a[0];
  for (int i = 0; i < n; i++)
  {
      if (a[i]-last>=mid)
      {
          cnt++;
          last=a[i];
      }
      if(cnt==c)
      {
         return true;
      }
      
  }
  
 return false;



}
int main(){
    int t;
    cin>>t;
    int n;
    int c;
    while (t--)
    {    cin>>n;
         cin>>c;
        int *a=new int[n];
         for (int i = 0; i < n; i++)
         {
             cin>>a[i];
         }
         sort(a,a+n);
         int s=a[0];
         int e=a[n-1]-a[0];
         int ans=0;
         while (s<=e)
         {
             int mid=(s+e)/2;
             if (cowrakhpaye(a,mid,c,n))
             {
                 ans=mid;
                 s=mid+1;
             }
             else
             {
                 e=mid-1;
             }
             
             
         }
         
         cout<<ans<<endl;
    }
    
    return 0;
}