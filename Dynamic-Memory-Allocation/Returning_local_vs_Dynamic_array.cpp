#include<iostream>
using namespace std;
int * fun_local()
{
    int a[]={1,2,3,4,5};
    return a; // returning address of a local variable which is created in stack memory
    // it will get destroyed after the function is over thus the values stored will be destroyed and fille with garbage

}
int * fun_Dynamic()
{
    int *a=new int[5];
    a[0]=11;
    a[1]=2;
    return a; // here the array is created inside the heap memory thus will not get destroyed eve after the function call is over

}
int main(){
    int *b;
    b=fun_local();
    cout<<b<<endl;
    cout<<b[0]<<endl; //print garbage or may give segmentation fault
    b=fun_Dynamic();
     cout<<b<<endl;
    cout<<b[0]<<endl;
    delete []b;
    return 0;
}