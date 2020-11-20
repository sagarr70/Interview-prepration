// Refer this
//https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25
//16:27 timestamp

#include<iostream>
using namespace std;
int a[10000];
int kadanes(int a[],int n)
{
   int maxsum=a[0];
   int currsum=0;
   for (int i = 0; i < n; i++)
   {
       currsum+=a[i];
       maxsum=max(maxsum,currsum);
       if (currsum<0)
       {
           currsum=0;
       }
       
   }
   
return maxsum;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int total_sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            total_sum+=a[i];
        }
        int kadane_maximum=kadanes(a,n);
        int non_contribuing_sum=0;
        for (int i = 0; i < n; i++)
        {
            a[i]=-a[i];
        }
        non_contribuing_sum=kadanes(a,n);
        int maximum_sum=total_sum-(-(non_contribuing_sum));
        cout<<max(kadane_maximum,maximum_sum)<<endl;;
        
    }
    
    return 0;
}