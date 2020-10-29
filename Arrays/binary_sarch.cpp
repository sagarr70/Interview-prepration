#include<iostream>
using namespace std;
// array must be sorted for binary search
int binarysearch(int a[],int n , int key)
{
    int start=0;
    int end=n-1;
    while (start<end)
    {
        int mid=(start+end)/2;
        if (a[mid]==key)
        {
            return mid;
        }
        else
        {
            if (a[mid]<key)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
   
    }
    return -1;
}
int main(){
    //n-> size of array
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // key -> elemnt to be searched
    int key;
     cout<<"Enter the element you want to search :";
    cin>>key;
    int ans=binarysearch(a,n,key);
     if (ans!=-1)
    {
        cout<<"Element found at index : "<<ans;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}