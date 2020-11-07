#include<iostream>
using namespace std;
void spiralprint(int a[100][100],int row,int col)
{
   int sr,er,sc,ec;
   sr=0;
   sc=0;
   er=row-1;
   ec=col-1;
   while (sr<=er&&sc<=ec)
   {
       for (int i = sc; i <=ec ; i++)
       {
         cout<<a[sr][i]<<" ";
       } 
       sr++;
       for (int i = sr; i <=er ; i++)
       {
           cout<<a[i][ec]<<" ";
       }
       ec--;

       if (er>sr)
       {
       
       for (int i = ec; i >=sc; i--)
       {
           cout<<a[er][i]<<" ";
       }
       er--;
       }

       
       if (sc<ec)
       {
         
       for (int i = er; i >=sr; i--)
       {
           cout<<a[i][sc]<<" ";
       }
       sc++;
       }
       
       
       
   }
   
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[100][100];
    int val=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {        
        a[i][j]=val;
        val++;
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {        
       cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralprint(a,m,n);
    
    return 0;
}