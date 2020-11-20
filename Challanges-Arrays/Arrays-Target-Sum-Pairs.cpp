#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    int key;
    cin>>key;

    int i=0,j=n-1;
    while (i<j)
    {   
        if (a[i]+a[j]==key)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;;
            i++;j--;
        }
        else
        {
            if (key>a[i]+a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
            
        }
        
        
    }
    
    return 0;
}