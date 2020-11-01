#include<iostream>
#include<string>
using namespace std;

int main(){
    //init of string
    string s0;
      getline(cin,s0);
    string s1("hello world1");
    string s2="hello world2";
    string s3(s2);
    string s4=s3;
     char a[]={'s','a','g','\0'};
    string s5(a); 
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    string s6;
    // check wheter string is empty or not
    if (s6.empty())
    {
      cout<<"string is empty"<<endl;
    }
    //remove content of string
    cout<<s1.length()<<endl;
    s1.clear();
    cout<<s1.length()<<endl;
    //append content into string
    s0.append(" c++ ");
    s0+="and python";
    cout<<s0<<endl;
    // compare two string (lexiographically)
    string s7="apple";
    string s8="mango";
    cout<<s7.compare(s8)<<endl; // returns an integer ==0 equal , >0 or <0
    cout<<s8.compare(s7)<<endl;
    //operator overloading for comparsion
    cout<<(s7<s8)<<endl;
    cout<<(s7>s8)<<endl;
    //access each element
    //loop
    for (int i = 0; i < s7.length(); i++)
    {
      cout<<s7[i]<<":";
    }
    cout<<endl;
    //iterator
    for (auto it =s8.begin(); it!=s8.end(); it++)
    {
      cout<<(*it)<<"?";
    }
    cout<<endl;
    //for each loop
    for(auto c:s7)
    {
      cout<<c<<"{";
    }
    cout<<endl;
    //find substring
    string s9("i am sagar aggarwal");
    int idx=s9.find("sagar");
    cout<<idx<<endl;
    cout<<s9<<endl;
    //remove a word from string
    string word="sagar";
    int len=word.length();
    s9.erase(idx,len+1);
    cout<<s9;


    return 0;
}