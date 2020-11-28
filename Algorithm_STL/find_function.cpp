#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    //search-->find
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);//find(starting index,ending index, key element) -> it returns address of the element
    // if the element is not present in the series it will return the address of the last element +1
    //the difference b/w address returned by find() and the starting index will give the no. of elements b/w them or 
    //index of the element searched (in case of element not found -> the index of last element+1)
    if(it-arr==n)
    {
        cout<<"Element not found";
    }
    else
    {
      cout<<"element found at index "<<it-arr<<endl;  
    }
    
    return 0;
}