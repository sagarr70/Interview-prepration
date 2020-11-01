#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char *s,char delim)
{
  static char *input=NULL;
  if (s!=NULL)
  {
      input=s;
  }
  if (input==NULL)
  {
      return NULL;
  }
  
  char *output=new char[strlen(input)+1];
  int i=0;
  for (; input[i]!='\0'; i++)
  {
      if (input[i]!=delim)
      {
          output[i]=input[i];
      }
      else
      {
          output[i]='\0';
          input+=i+1;
          return output;
      }
      
  }
  //corner case
  output[i]='\0';
  input=NULL;
  return output;

}
int main(){
    string a;
    getline(cin,a);

    char s[100];
    strcpy(s,a.c_str());
    char *ptr=mystrtok(s,' ');
    cout<<ptr<<endl;
    while (ptr!=NULL)
    {
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
        
    }
    return 0;
}