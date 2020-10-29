#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    int cum[1000];
    int max_sum=INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cum[0]=a[0];
    for (int i = 1; i <n ; i++)
    {
        cum[i]=cum[i-1]+a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
          if(i==0) 
      sum=cum[j];
      else
      sum=cum[j]-cum[i-1];
          max_sum=max(max_sum,sum);
          sum=0;
      }
    
    }
    cout<<max_sum;

    return 0;
}