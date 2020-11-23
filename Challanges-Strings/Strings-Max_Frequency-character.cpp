#include<iostream>
#include<string>
using namespace std;
int freq[256]={0};
int main(){
  string a;
  cin>>a;
 int  maxi=0;
  int idx=-1;
  for (int i = 0; i < a.length(); i++)
  {
      freq[int(a[i])]++;
      if (freq[int(a[i])]>maxi)
      {
          maxi=freq[int(a[i])];
          idx=int(a[i]);
      }
      
  }
  cout<<char(idx);

    return 0;
}