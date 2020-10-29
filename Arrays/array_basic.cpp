#include<iostream>
using namespace std;

int main(){
    //initialization of array
    int b[10];//all buckets have garbage value
    int a[10]={0};// all uckets have 0 as init value {0,0,0,0,0,0,0,0,0,0}
    int c[10]={1,2,3}; // first the elements are init rest elemts are 0 {1,2,3,0,0,0,0,0,0,0}
    //size of array
    cout<<"memory size of array : "<<sizeof(a)<<endl;
   cout<<"no. of buckets in the array"<<sizeof(a)/sizeof(int)<<endl;
    //input all the elements from the user
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    //update single index
    a[8]=100;
    //print all the elements of the array
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<",";
    }
    
    return 0;
}