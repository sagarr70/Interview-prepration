#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            sum+=a[i][j]*(((i+1)*(j+1))*((n-i)*(m-j)));
        }
        
    }
    cout<<sum;
    return 0;
}