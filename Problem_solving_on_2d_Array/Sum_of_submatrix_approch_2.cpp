#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
          cin>>a[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {   if (j>=1)
         {
      
          a[i][j]+=a[i][j-1];}
    }
     for (int j = 0; j < m; j++)
      {   if (i>=1)
         {
      
          a[i][j]+=a[i-1][j];}
    }
    }
    int sum=0;
     for (int li = 0; li < n; li++)
    {
      for (int lj = 0; lj < m; lj++)
      {
          for (int bri = li; bri < n; bri++)
          {
              for (int brj = lj; brj < m; brj++)
              {
                 sum+=a[bri][brj];
                 if (li-1>=0)
                 {
                     sum-=a[li-1][brj];
                 }
                 if (lj-1>=0)
                 {
                     sum-=a[bri][lj-1];
                 }
                 if (li-1>=0&&lj-1>=0)
                 {
                     sum+=a[li-1][lj-1];
                 }
                 
                 
                 
              }
              
          }
          
      }
      
    }
    cout<<sum;
    return 0;
}