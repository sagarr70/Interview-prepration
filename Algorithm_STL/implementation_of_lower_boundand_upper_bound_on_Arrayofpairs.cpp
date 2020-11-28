#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int>p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    pair<int,int>x;
    cin>>x.first>>x.second;
    auto lb=upper_bound(p,p+n,x);
    cout<<lb-p;
    return 0;
}