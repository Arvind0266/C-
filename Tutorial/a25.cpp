#include<iostream>
#include<string>
using namespace std;
class stringop
{
    string str;
    public:
    stringop()
    {
        string str="ARVIND";
    }
    void encode();
    void print();

};
void stringop::encode()
{

}
void stringop::print()
{
    cout<<"the string is= "<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        int a=str.length();
       cout<<"ASfdsf";
        cout<<a;    
    }
    
}
int main()
{
    stringop arvind;
    // arvind.encode();
    arvind.print();



return 0;
}