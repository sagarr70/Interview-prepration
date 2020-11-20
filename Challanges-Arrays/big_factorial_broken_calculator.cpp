#include<iostream>
using namespace std;
#define MAX 1000
int multiply(int ans[],int j,int len)
{
    int carry=0;
    for (int i = 0; i < len; i++)
    {
        int prod=(ans[i]*j)+carry;
        ans[i]=prod%10;
        carry=prod/10;
    }
    while (carry)
    {
        ans[len]=carry%10;
        carry/=10;
        len++;
    }
    return len;

}
void facto(int n)
{
    int ans[MAX];
    int len=1;
    ans[0]=1;
    for (int i = 2; i <=n; i++)
    {
        len=multiply(ans,i,len);
    }
    for (int i = len-1; i >=0; i--)
    {
        cout<<ans[i];
    }
    
    
}
int main(){
    int n;
    cin>>n;
    facto(n);
    return 0;
}