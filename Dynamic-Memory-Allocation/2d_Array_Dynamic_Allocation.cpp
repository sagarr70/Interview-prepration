#include<iostream>
using namespace std;

int main()
{  //allocation
    int r,c;
    cin>>r>>c;
    int **p;
    p=new int *[r];
    for (int i = 0; i < r; i++)
    {
        p[i]=new int [c]{0};
    }
    //printing values
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    int val=1;
    //taking input and printing
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   p[i][j]=val;
        val++;
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //deallocation
    for (int i = 0; i < r; i++)
    {
        delete [] p[i];
    }
    delete [] p;



    
    return 0;
}