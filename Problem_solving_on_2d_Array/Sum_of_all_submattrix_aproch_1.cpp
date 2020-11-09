#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {  for (int j = 0; j < m; j++)
      {
        cin>>a[i][j];
    }
      }
    int sum=0;
    for (int li = 0; li < n; li++)
    {
        for(int lj=0;lj<m;lj++)
        {
            for (int bri = li; bri < n; bri++)
            {
                for (int brj = lj; brj < m; brj++)
                {
                    for (int i = li; i <=bri; i++)
                    {
                        for (int j =lj; j <= brj; j++)
                        {
                            sum+=a[i][j];
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    
    cout<<sum;
    return 0;
}