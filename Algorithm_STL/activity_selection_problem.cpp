#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
     return a.second < b.second;
}
int main(){
    int t;
    cin>>t;
     int n;
    while (t--)
    {
       
        cin>>n;
        pair<int,int> p[n];
        for (int i = 0; i < n; i++)
        {
            cin>>p[i].first;
            cin>>p[i].second;
        }
        if (n<1)
        {
            cout<<0<<endl;
        }
        else
        {
            int count=1;
            int flag=0;
            int start=0;
            sort(p, p + n, cmp);
            for (int i = 1; i < n; i++)
            {
                
                    if(p[i].first>=p[start].second)
                    {
                        count++;
                        flag=1;
                        start=i;
                    }
             
                
            }
            cout<<count<<endl;
            
        }
        
        
    }
    
    return 0;}