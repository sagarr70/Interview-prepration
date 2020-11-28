#include<iostream>
#include<algorithm>
using namespace std;
int a[1000];
int main(){
    int t;
    cin>>t;
    int n;
    while (t--)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        next_permutation(a,a+n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}