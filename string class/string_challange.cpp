#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string keyextraxction(string s,int key)
{
    char *output=strtok((char *)s.c_str()," ");
    while (key>1)
    {
        output=strtok(NULL," ");
        key--;
    }
    return (string)output;
}
int convint(string key)
{
    int ans=0;
    int p=1;
    for (int i = key.length()-1;i>=0 ; i--)
    {
        ans=ans+(((key[i]-'0'))*p);
        p*=10;
    }
    return ans;
}
bool numericcompare(pair<string,string> s1,pair<string,string> s2)
{
  string key1,key2;
  key1=s1.second;
  key2=s2.second;
  return convint(key1)<convint(key2);
}
bool lexiocompare(pair<string,string>s1,pair<string,string>s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
int main(){
    int n;
   cin>>n;
   cin.get();
   string a[100];
   for (int i = 0; i < n; i++)
   {
       getline(cin,a[i]);
   }
   int key;
   cin>>key;
   string reverse,ordering;
   cin>>reverse>>ordering;
   pair<string,string> strpair[100];
   for (int i = 0; i < n; i++)
   {
       strpair[i].first=a[i];
       strpair[i].second=keyextraxction(a[i],key);
   }
   if (ordering=="numeric")
   {
       sort(strpair,strpair+n,numericcompare);
   }
   else
   {
       sort(strpair,strpair+n,lexiocompare);
   }
    if (reverse=="true")
    {
        for (int i = 0; i < n/2; i++)
        {
            swap(strpair[i],strpair[n-i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<strpair[i].first<<endl;
    }
    
  
   
    return 0;
}