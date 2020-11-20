#include<iostream>
using namespace std;
void spiralprint(int a[][10],int n,int m)
{
    int sr,sc,er,ec;
    sr=0;
    sc=0;
    er=n-1;
    ec=m-1;
    while (sr<=ec && er>=sc)
    {
        for (int i = sr; i <=er ; i++)
        {
            cout<<a[i][sc]<<", ";
        }
        sc++;
        for (int i = sc; i <=ec  ; i++)
        {
            cout<<a[er][i]<<", ";
        }
        er--;
        if (ec>sc)
        {
        for (int i = er; i >=sr; i--)
        {
            cout<<a[i][ec]<<", ";
        }
        ec--;
        }
        if (sr<er)
        {
        
        for (int i = ec; i >=sc; i--)
        {
            cout<<a[sr][i]<<", ";
        }
        sr++;
        }

        
    }
    cout<<"END";
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            cin>>a[i][j];  
        }
        
    }
    spiralprint(a,n,m);
    
    return 0;
}