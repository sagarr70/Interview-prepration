#include<iostream>
using namespace std;
bool ispallindrome(char a[],int n,int start)
{
  if (start>=n)
  {
     return true;
  }
  if (a[start]==a[n])
  {
      return ispallindrome(a,--n,++start);

  }
  return false;
}
int main(){
    int n;
    cin>>n;
    char a[1000];
   
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    
 
    cout<<boolalpha<<ispallindrome(a,n-1,0);
    
    return 0;
}