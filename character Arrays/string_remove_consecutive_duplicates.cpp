#include<iostream>
#include<cstring>
using namespace std;
void remove_duplicate(char a[])
{ int len=strlen(a);
  int i=0;
  int j=1;
  while (j<len)
  {
      if (a[i]==a[j])
      {
          j++;
      }
      else
      {  a[i+1]=a[j];
          //swap(a[i+1],a[j]);
          i++;j++;
      }
      
      
  }
  a[i+1]='\0';
 
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    remove_duplicate(a);
     cout<<a;
    return 0;
}