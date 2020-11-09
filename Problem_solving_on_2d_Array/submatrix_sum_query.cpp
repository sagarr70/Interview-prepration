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
        {
            if (j>=1)
            {
                a[i][j]+=a[i][j-1];
            }
            
            
        }
        for (int j = 0; j < m; j++)
        {
            if (i>=1)
            {
                a[i][j]+=a[i-1][j];
            }
            
            
        }
    }
    int tli,tlj,bri,brj;
    cin>>tli>>tlj>>bri>>brj;
  int sum=0;
  sum=a[bri][brj];
  if (tli-1>=0)
  {
      sum-=a[tli-1][brj];
  }
  if (tlj-1>=0)
  {
      sum-=a[bri][tlj-1];
  }
  if (tli-1>=0 && tlj-1>=0)
  {
      sum+=a[tli-1][tlj-1];
  }
  
cout<<sum;




    return 0;
}