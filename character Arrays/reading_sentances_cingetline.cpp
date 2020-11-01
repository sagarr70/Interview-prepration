#include<iostream>
using namespace std;
//read a sentence/paragraph
//cin.get() reads a single character
//put a loop to read characters till you ge a new line '\n'
void readline(char a[],int maxlen,char delim='\n')
{
    int i=0;
    char ch=cin.get();
    while (ch!=delim)
    {
        a[i]=ch;
        i++;
        if (i==maxlen-1)
        {
          break;
        }
        ch=cin.get();
    }
    a[i]='\0';
}
//read a sentence/paragraph and store it in character array
int main()
{
     char a[1000];
     //readline(a,1000,'$');
     cin.getline(a,1000,'$');
     cout<<a;

    return 0;
}