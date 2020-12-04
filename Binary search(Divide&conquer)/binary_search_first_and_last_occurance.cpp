#include<iostream>
using namespace std;
int firstoccurance_binarysearch(int *a,int start,int end,int key)
{ int ans=-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (a[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            if (key>a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
            
        }
        
    }
    return ans;
}
int lastoccurance_binarysearch(int *a,int start,int end,int key)
{ int ans=-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (a[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            if (key>a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
            
        }
        
    }
    return ans;
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
    int ans_first=firstoccurance_binarysearch(a,0,n-1,key);
    cout<<ans_first<<endl;
    
    int ans_last=lastoccurance_binarysearch(a,0,n-1,key);
    cout<<ans_last<<endl;
    return 0;
}