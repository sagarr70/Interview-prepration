#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    bool comp(string s1, string s2)
{
    if(s1.length() < s2.length())
        return 1;
    else if(s1.length() > s2.length())
        return 0;
    else return s1 < s2;
}
int main(){
    int a=10;
    int b=20;
    //
    swap(a,b);
    cout<<a<<" "<<b;
    cout<<endl;
    //
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    //
    reverse(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //
    swap(arr[0],arr[1]);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    // next_permutation
    next_permutation(arr,arr+n);
for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
string s = "bca";

   do {
        cout << s << ' ';
    } while(next_permutation(s.begin(), s.end()));  
    // if next largest permuation is not possible then it return smallest possible permuation which in our case is abc

 cout << s;




    //max_element in the array
int ai[]={1,2,3,4,5};
auto it=max_element(ai,ai+5); // returns address
cout<<*it;

    return 0;
}