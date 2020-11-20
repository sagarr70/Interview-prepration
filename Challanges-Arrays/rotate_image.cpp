#include<iostream>
using namespace std;
void rotate_image(int a[][100],int n)
{
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j<n/2; j++)
       {
          swap(a[i][j],a[i][n-1-j]);
       }
       
   }
   for (int i = 0; i < n; i++)
   {
       for (int j = i+1; j<n; j++)
       {
           
           if (j>i)
           { 
            swap(a[i][j],a[j][i]);
           }
       }
       
   }
   



   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j<n; j++)
       {
             cout<<a[i][j]<<" ";
        
       }
       cout<<endl;
   }



}
int main(){
    int n;
    cin>>n;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    rotate_image(a,n);

    return 0;
}