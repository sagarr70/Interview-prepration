#include<iostream>
#include<climits>
using namespace std;

int main(){
   int n;
   cin>>n;
   int a[1000]={0};
   int maxi,mini;
   maxi=INT_MIN;
   mini=INT_MAX;
   for (int i = 0; i < n; i++)
   {
      cin>>a[i];
      maxi=max(a[i],maxi);
      mini=min(a[i],mini);
   }
   cout<<"Largest element is : "<<maxi<<endl;
   cout<<"smallest element is : "<<mini;

    return 0;
}