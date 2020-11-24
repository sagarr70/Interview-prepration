#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    // name of arrray acts as a pointer which stores the address to the first
    // element inside the array
    // let i=0 and if we do cout<<(arrayname+i); it will print the adress of ith variable in the array
    // for printing the element inside the array using pointer we can derefer the address i.e 
    // cout<<*(a+i); i moves the address ahead by k bytes  where
    // k= size of type of array
  if (a==&a[0])
  {
      cout<<boolalpha<<true<<endl;
  }
  int *aptr=a;
  //apt=a is valid
  //a=aptr is not valid
  cout<<aptr<<" "<<a<<" "<<&a[0]<<" "<<&a<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<(a+i)<<endl;// address of each element inside the array
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<*(a+i)<<" ";// 1 2 3 4 5 i.e value of elements in the array
    }
    cout<<endl;
    char p[]="sagar";
    char *pptr=p; // as p stores the address of first index in char array
    cout<<pptr<<endl;
     // it will not print the adddress because due to operator overloading 
    // for char type whenever << gets the adress of char type variable it prints the element inside the char array
    // till we get the null variable '\0'
    //to print the adress for the char type we can explicitly type cast to void type
    cout<<(void *)pptr<<endl; 
    cout<<*p<<" "<<*pptr;// 's' prints the derefered value at the first index of char array
    //pptr=p it is valid
    //p=pptr is not valid

    return 0;
}