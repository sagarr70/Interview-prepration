#include<iostream>
#include<string>
using namespace std;
bool checkcb(long long sub)
{
  if (sub==0||sub==1)
  {
      return false;
  }
  int a[]={2,3,5,7,11,13,17,19,23,29};
  for (int i = 0; i < sizeof(a)/sizeof(int); i++)
  {
      if (a[i]==sub)
      {
          return true;
      }
     
      
  }
  for (int i = 0; i <  sizeof(a)/sizeof(int); i++)
  {
      if (sub%a[i]==0)
      {
          return false;
      }
      
  }
  
  return true;



}
bool isvalid(int start,int end,bool visited[])
{
for (start; start<end; start++)
{
    if (visited[start]==true)
    {
        return false;
        /* code */
    }
    
}


return true;


}
int main(){
     int n;
     cin>>n;
    string s;
    cin>>s;
    int ans=0;
    bool visited[17]={false};
    for (int len = 1; len <=s.length() ; len++)
    {
        for ( int pos = 0; pos <=s.length()-len ; pos++)
        {
            string sub=s.substr(pos,len);
            int end=pos+len;
            if (checkcb(stoll(sub))&&isvalid(pos,end,visited))
            {
              ans++;
              for (int i = pos; i < end; i++)
              {
                  visited[i]=true;
              }
              
            }
            
        }
        
    }
    
    cout<<ans;
    return 0;
}