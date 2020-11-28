#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    auto it=binary_search(a,a+n,key); //return boolean value about the key element
    if (it)
    {
        cout<<"PRESENT";
    }
    else
    {
        cout<<"ABSENT";
    }
    // To find the index of the elment
    // lower_bound(start,end,key) and upper_bound(start,end,key)
    // lower_bound() -> will return the address of the first element whih is >=key
    //  upper_bound() -> will return the address of the first element which is > key
    // difference between upper_bound() and lower_bound() will give the occurance frequency of the key element
    auto  lb=lower_bound(a,a+n,key);
    auto ub=upper_bound(a,a+n,key);
    cout<<endl<<lb-a<<" key"<<endl; // will give the index of the key if present other-wise may give index of element just greater than key or may give the last index+1 due to unpresence of the element in the array and no element greater than key
    cout<<"occuring frequency of "<<key<<" "<<ub-lb;




    return 0;
}