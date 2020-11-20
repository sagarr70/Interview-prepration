#include<iostream>
using namespace std;
#define MAX 500
int main(){
    int n,m;
    cin>>n;
    int a[10]={0};
    int b[10];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i = 0; i <m; i++)
    {
        cin>>b[i];
    }

    
    int ans[MAX];
    int len=1;
    ans[0]=0;
    int carry=0;
    while (n>0||m>0)
    {   int sum=0;
        if (n-1>=0)
        {
          sum+=a[n-1];
        }
        if (m-1>=0)
        {
           sum+=b[m-1];
        }
        ans[len-1]=sum%10+carry;
        carry=sum/10;
        n--;m--;len++;
        
    }
    while (carry)
    {
        ans[len-1]=carry%10;
        carry=carry/10;
        len++;
    }
    
    
   for (int i=len-2; i>=0 ;i--)
   {
       cout<<ans[i]<<", ";
   }
   cout<<"END";
    
    return 0;
}