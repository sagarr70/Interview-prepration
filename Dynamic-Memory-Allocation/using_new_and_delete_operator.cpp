#include<iostream>
using namespace std;

int main(){
    //stack memory allocation + deallocation -> done by compiler
    int b[100]={0};//all elements initialized with 0
    cout<<sizeof(b)<<endl;
    cout<<b; // This value comes from symbol table and cannot be overwritten
    
    //updating b=something not possible
    
    
     //Dynamic allocation + deallocation done by programmer
    int n;
    cin>>n;
    int *a=new int[n]{0};//all elements initialized with 0
    cout<<sizeof(a)<<endl; // size of pointer variable
    cout<<a<<endl; //variable 'a' that is created inside the static memory ->overwritten
    //a=new char[30]; possible

   // No change i using the array only allocation changes
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    
    //free up space
    delete [] a;




    return 0;
}