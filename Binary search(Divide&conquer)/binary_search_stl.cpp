#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    auto ans=binary_search(a,a+n,key);
    cout<<boolalpha<<ans<<endl;
    // lower_bound() and upper_bound()
    auto lb=lower_bound(a,a+n,key);
    cout<<lb-a<<endl; // n if element doest exist , otherwise index where a[i] >= key 
    auto ub=upper_bound(a,a+n,key);
    cout<<ub-a;//n if element doest exist otherwise index where a[i] > key
    

    return 0;
}