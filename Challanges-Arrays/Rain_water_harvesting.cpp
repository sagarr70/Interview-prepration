#include<iostream>
#include<climits>
using namespace std;
int a[1000000];
int left_max[1000000];
  int right_max[1000000];
int main(){
    int n;
    cin>>n;
    
    int maax=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        maax=max(a[i],maax);
        left_max[i]=maax;

    }
    
  
    maax=INT_MIN;
    for ( int i = n-1; i>=0; i--)
    {
        maax=max(a[i],maax);
        right_max[i]=maax;
    }
    int water_saved=0;
    for (int  i = 0; i < n; i++)
    {
        int mini=min(left_max[i],right_max[i]);
        water_saved+=a[i]-mini;
    }
    
        cout<<abs(water_saved);
    
    return 0;
}