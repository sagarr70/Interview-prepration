#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int max_sum=0;
    for (int i = n-1; i >=0; i--)
    {
        for (int j = n-1; j>=0; j--)
        {
            if (j+1<=n-1)
            {
                a[i][j]+=a[i][j+1];
            }
            
        }
        for (int j = n-1; j>=0; j--)
        {
            if (i+1<=n-1)
            {
                a[i][j]+=a[i+1][j];
            }
            max_sum=max(a[i][j],max_sum);
        }
        

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<max_sum;
    return 0;
}