#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int val=1;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=val;
            val++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {

    
    for (int j = 0; j < m/2; j++)
    {
        swap(a[i][j],a[i][(m-1)-j]);
    }
    }    
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (i<j)
           {
           
           swap(a[i][j],a[j][i]);}
          }
        
    }
    
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}