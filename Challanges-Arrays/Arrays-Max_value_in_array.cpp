#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    int maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maximum=max(a[i],maximum);
    }
    cout<<maximum;
    return 0;
}