#include<iostream>
using namespace std;
void waveprint(int a[100][100],int m,int n)
{
    for (int i = 0; i < n; i++)
    {
        
            if (i%2==0)
            {
                for (int j = 0; j < m; j++)
                {
                    cout<<a[j][i]<<" ";
                }
                
            }
            else
            {
                for (int j = m-1; j >=0; j--)
                {
                    cout<<a[j][i]<<" ";
                }
            }
            
            
        
        
    }
    
    
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[100][100];
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
          cin>>a[i][j];
      }
    }
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
    waveprint(a,m,n); 
  
    
    return 0;
}