#include<iostream>
using namespace std;
bool stair_case_search(int n,int m,int a[][30],int key)
{
    int i=0;
    int j=m-1;
    while ((i>=0&&j>=0)&&(i<n&&j<m))
    {
        if (a[i][j]==key)
        {
            return true;
        }
        else
        {
            if (a[i][j]>key)
            {
                j--;
            }
            else
            {
                i++;
            }
            
            
        }
        
        
    }
    return false;
}
int main(){
     int n,m;
     cin>>n>>m;
     int a[30][30];
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j< m; j++)
        {
            cin>>a[i][j];
        }
        
     }
     int key;
     cin>>key;
     cout<<stair_case_search(n,m,a,key);

    return 0;
}