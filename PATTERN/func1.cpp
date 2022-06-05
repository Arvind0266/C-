#include<iostream>
using namespace std;
void alphabet(char c)
{
    int ascii=(int)c;
    cout<<ascii<<endl;
    if((ascii>=97 && ascii<=122)|| (ascii>=65 && ascii<=90))
    {
        cout<<"Alphabet";
    }
    else {
        cout<<"Not Alphabet";
    }
}
int main()
{
char ch;
cout<<"Enter  a character= ";
cin>>ch;
alphabet(ch);


return 0;
}