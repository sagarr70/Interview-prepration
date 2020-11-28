#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a<=b;
}
int main(){
    int money[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(money)/sizeof(int);
    int x;
    cin>>x;
    while (x>0)
    {
        auto it=lower_bound(money,money+n,x,compare)-1;
        cout<<money[it-money]<<" ";
        x=x-money[it-money];
    }
    
    
    
    return 0;
}