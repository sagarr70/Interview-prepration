#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    // n-> size of array ; key -> element to be searched
    int n,key;
    cin>>n;
    int a[1000]={0};
    //taking the elements in the arry as input
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // taking key as input
    cout<<"Enter the element you want to search :";
    cin>>key;
    //Finding out the index of that element by traversing the array
    int ans=linearsearch(a,n,key);
    if (ans!=-1)
    {
        cout<<"Element found at index : "<<ans;
    }
    else
    {
        cout<<"Element not found";
    }
    
    
    
    return 0;
}