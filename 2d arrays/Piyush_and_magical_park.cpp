#include<iostream>
using namespace std;
void magicalpark(char a[][100],int n,int m,int k,int s)
{
 int i=0;
 int j=0;
 while ((i<n&&j<m))
 {   
    if (s<k)
    {
        cout<<"No"<<endl<<s;
        return;
    }
    if (a[i][j]=='*')
    {
        s+=5;
    }
    else if (a[i][j]=='.')
    {
        s=s-2;
    }
    if (a[i][j]=='#')
    {
      i++;j=0;
    }
    else
    {
    if (j!=m-1)
    {
        s--;
        j++;
    }
    else
    {
        j=0;i++;
    }
    }

 }
 cout<<"Yes"<<endl;
 cout<<s;


}
int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
   magicalpark(a,n,m,k,s);
   
    
    
    return 0;
}