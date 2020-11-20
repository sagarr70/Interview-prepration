// refer this
// https://www.youtube.com/watch?v=XqTBrQYYUcc
#include<iostream>
using namespace std;
int a[1000000];
int rainwater(int a[],int n)
{
   int i=0;int j=n-1;
   int left_max=a[0];
   int right_max=a[n-1];
   int total_water=0;
   while (i<=j)
   {
       right_max=max(right_max,a[j]);
       left_max=max(left_max,a[i]);
       if (left_max<=right_max)
       {
           total_water+=left_max-a[i];
           i++;
       }
       else
       { 
           if (right_max<=left_max)
           {
           
           total_water+=right_max-a[j];
           j--;}
       }
       
       
   }
   return total_water;
}
int main(){
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    int ans=rainwater(a,n);
    cout<<ans;
    return 0;
}