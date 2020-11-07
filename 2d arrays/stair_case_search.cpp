#include<iostream>
using namespace std;
bool staircasesearch(int a[][100],int n,int m,int key)
{
    int i=0;
    int j=m-1;
    while ((i<n&&j<m)&&(i>=0&&j>=0))
    {
        if (a[i][j]==key)
        {
            return true;
        }
        else
        {
            if (key>a[i][j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
            
        }
        
    }
    return false;
}
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
    int key;
    cin>>key;
    bool ans=staircasesearch(a,n,m,key);
    cout<<boolalpha<<ans;
    return 0;
}