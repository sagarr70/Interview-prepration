#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr=i;
        for (int j = i-1; j>=0; j--)
        {
            if (a[j]>a[curr])
            {
                swap(a[j],a[curr]);
                curr=j;
            }
            
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    insertionsort(a,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}