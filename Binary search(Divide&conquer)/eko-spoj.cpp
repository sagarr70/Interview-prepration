#include<iostream>
#include<algorithm>
using namespace std;
bool isvalid(int a[],int n,int m,int mid)
{   int wood_cutten=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>mid)
        {
            wood_cutten+=a[i]-mid;
        }
        
        if (wood_cutten>=m)
        {
            return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int start=1;
    int end=*max_element(a,a+n);
    int ans=0;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (isvalid(a,n,m,mid))
        {  ans=mid;
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