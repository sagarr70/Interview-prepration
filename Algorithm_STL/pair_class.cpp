#include<iostream>
#include<vector>
using namespace std;

int main()
{

    pair<int,char> p;
    p.first=1;
    p.second='B';
    cout<<p.first<<" "<<p.second;

    cout<<endl;
    // copy pair to another pair
    pair<int,char> p2(p);
    cout<<p.first<<" "<<p.second<<endl;;
    //make_pair function
    pair<int,string> p3 =make_pair(100,"audi");
    cout<<p3.first<<" "<<p3.second<<endl;

    //take input
    int a,b;
    cin>>a>>b;
    pair<int,int> p4 =make_pair(a,b);
    cout<<p4.first<<" "<<p4.second<<endl;
    //pairof array

    pair<int[5],int[5]>x;
    int val=1;
    for (int i = 0; i < 5; i++)
    {
        x.first[i]=val;
        x.second[i]=val+1;
        val++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<x.first[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<x.second[i]<<" ";
    }
    cout<<endl;


    //array of pair
    pair<int,int>y[5];
    for (int i = 0; i < 5; i++)
    {
        y[i].first=val;
        y[i].second=val+1;
        val++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<y[i].first<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<y[i].second<<" ";
    }
    cout<<endl;
 
   //vector of pair

    vector<pair<int,int>>v;
    v.push_back({1,2});
    for (auto it:v)
    {
        cout<<it.first<<" ";
        cout<<it.second<<endl;
    }
    





    //paiir of pairs
    pair<pair<int,int>,string>car;
    car.first.first=10;
    car.first.second=12;
    car.second="honda amaze";
    cout<<car.first.first<<" "<<car.first.second<<" "<<car.second<<endl;
    pair<pair<int,int>,pair<char,string>>bike;
    bike.first.first=100;
    bike.first.second=450;
    bike.second.first='g';
    bike.second.second="hayabuza";
    cout<<bike.first.first<<" "<<bike.first.second<<" "<<bike.second.first<<" "<<bike.second.second;
    typedef pair< string, pair< int, pair< double, int * > > > myDataType;
    return 0;
}