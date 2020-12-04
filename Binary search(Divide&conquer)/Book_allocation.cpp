#include<iostream>
#include<climits>
using namespace std;
bool isvalid(int a[],int n,int m,int max_pages)
{
    int students_used=1;
    int pages_readed=a[0];
    for (int i = 1; i < n; i++)
    {   
        if (pages_readed+a[i]>max_pages)
        {
            students_used++;
            pages_readed=a[i];
            if (students_used>m)
            {
                return false;
            }
        }
        else
        {
            pages_readed+=a[i];
        }
        
        
    }
    return true;
}
int find_minimum(int a[],int n, int m,int sum)
{ 
    int s=a[n-1];
    int e=sum;
    int &start=s;
    int &end=e;
    int ans=INT_MAX;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (isvalid(a,n,m,mid))
        {   ans=min(ans,mid);
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int sum=0;
    int *a = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<find_minimum(a,n,m,sum);   
    return 0;
}