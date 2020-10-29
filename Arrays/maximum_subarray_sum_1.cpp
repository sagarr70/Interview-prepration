#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[]={-4,1,3,-2,6,2,-8,-9,4};
    int n=sizeof(a)/sizeof(int);
    int sum=0;
    int max_sum=INT_MIN;
    int left=-1,right=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
          for (int k = i; k <= j; k++)
          {
              sum=sum+a[k];
          }
          if (sum>max_sum)
          {
              max_sum=sum;
              left=i;
              right=j;
          }
          
          sum=0;
          
        }
        
    }
    cout<<max_sum<<endl;
    for (int i = left; i <=right ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}