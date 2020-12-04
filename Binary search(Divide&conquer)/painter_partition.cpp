#include<iostream>
#include<algorithm>
using namespace std;
bool isvalid(long long int k,long long int n,int a[],long long int mid)
{   int time=0;
    int painter_used=1;
    for (int i = 0; i < n; i++)
    {    time=time+(a[i]);
        if (time>mid)
        {   time=(a[i]);
            painter_used++;
        }
    }
    return painter_used<=k;
    
}
int main(){
    int k;int n;
    cin>>n>>k;
    int t;
    cin>>t;
    int a[n];
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long int start=(*max_element(a,a+n));
    long long int end=sum;
    long long int ans=0;
    while (start<=end)
    {
        long long int mid=(start+end)/2;
        if (isvalid(k,n,a,mid))
        {   ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
        
    }
    cout<<((ans%10000003)*(t%10000003))%10000003<<endl;
    return 0;
}