//square root using binary search
#include<iostream>
#include<cmath>
using namespace std;

long long int squareroot(long long int n,int k)
{
    long long int start=1;
    long long int end=n;
    long long int ans=-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if ((int)pow(mid,k)<=n)
        {   ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    /*
    float inc=0.1;
    int precision=3;
    for (int i = 0; i < precision; i++)
    {
        while (ans*ans<n)
        {
            ans=ans+inc;
        }
        ans-=inc;
        inc=inc/10;
    }
     */
    return ans;
}
int main(){
    long long int n;
    int t;
    cin>>t;
    while (t--)
    {
    cin>>n;
    int k;
    cin>>k;
    long long int  ans=squareroot(n,k);
    cout<<ans<<endl;
    }
    return 0;
}