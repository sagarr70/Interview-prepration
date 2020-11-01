//kadanes algorith to print maximum sum of an subarray in o(n)
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cur_sum=0;
    int max_sum=a[0];
    for (int i = 0; i < n; i++)
    {
        cur_sum=cur_sum+a[i];
        max_sum=max(max_sum,cur_sum);
        if (cur_sum<0)
        {
            cur_sum=0;
        }
         
    }
    cout<<max_sum<<endl;}
    return 0;
}