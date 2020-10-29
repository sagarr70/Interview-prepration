#include<iostream>
using namespace std;
bool compare(int a, int b)
{
    return a<b;
}
void bubblesort(int a[],int n,bool (&cmp)(int a,int b))
{
    while (n>0)
    {
       for (int i = 0; i <n-1; i++)
       {
         if (cmp(a[i],a[i+1]))
         {
             swap(a[i],a[i+1]);
         }
         
       }
       n--;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n,compare);
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}