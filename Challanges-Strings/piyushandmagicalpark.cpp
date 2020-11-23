#include<iostream>
using namespace std;
void park_magical(char park[][100],int n,int m,int k,int s)
{ 
    int i=0;
    int j=0;
  while (s>=k && (i<n && j<m) )
  {   int flag=0;
      
      if (park[i][j]=='*')
      {
          s=s+5;
      }
      else
      {
          if (park[i][j]=='.')
          {
              s-=2;
          }
          else
          {
              j=0;
              i++;
              flag=1;
          }
          
          
      }
      if (j!=m-1 &&flag==0)
      {
          j++;
          s--;
      }
      else
      {  if (flag!=1)
      {
        
      
          j=0;
          i++;}
      }
  }
  
if (s>=k)
{
    cout<<"Yes"<<endl<<s;
}
else
{
    cout<<"No";
}






}
int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
     char park[100][100];
    for (int i = 0; i < n; i++)
        {for (int j = 0; j < m; j++)
        {
            cin>>park[i][j];
        }}
    park_magical(park,n,m,k,s);
    return 0;
}