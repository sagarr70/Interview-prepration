#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    for (int i = 0; i <3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
  int (*p)[3]=a; //declaration of pointer for 2d array
  //p will point to entire first row. 
  // address of first row is equal to address of first element in first row
  // on cout<<(*p); we will get the address of first element in first row
  // i.e cout<<p; or cout<<*p; will be same
  cout<<p<<" "<<*p<<endl;
  //on cout<<**p; we will get the value at the first row and first position 
  //i.e a[0][0]
  cout<<**p<<endl;
  // on p+1 we will move to next row and similarly now p will point to entire 2nd row
  // on cout<<p; and  cout<<*p; we will get the adress of second row or first element in second row
  //on cout<<**p; after p+1 we will get value at a[1][0];
  p=p+1;
  //but a=a+1; is not valid
  cout<<p<<" "<<*p<<endl;
  cout<<**p<<endl;
  // To move in the same row :-
  // *(p)+i; <-- this will move the pointer to the ith element in the same row
  for (int i = 0; i < 3; i++)
  {
      cout<<*(p)+i<<" "<<*(*(p)+i)<<endl; // will print the elements in 2nd row along with address;
  }
  //we can perform similar operation using the name of array in our case its 'a'
   for (int i = 0; i < 3; i++)
  {
      cout<<*(a)+i<<" "<<*(*(a)+i)<<endl; // will print the elements in 2nd row along with address;
  }
  
    return 0;
}