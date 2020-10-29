#include<iostream>
using namespace std;
//Given a sorted array, find pair of elements that sum to K (Given)
int main(){
    int n,key;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    cin>>key;
    int start=0;
    int end=n-1;
    while (start<end)
    {
        if (a[start]+a[end]==key)
        {
            cout<<a[start]<<" "<<a[end]<<endl;
            start++;end--;
        }
        else
        {
            if (a[start]+a[end]<key)
            {
                start++;
            }
            else
            {
                end--;
            }
            
            
        }
        
        
    }
    
    
    return 0;
}