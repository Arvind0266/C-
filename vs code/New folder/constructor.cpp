#include<iostream>
using namespace std;

class student{
   
     string name;
     public:
     student(string n)
     {
        name=n;

     }
     void getName()
     {
         cout<<name<<endl;
     }
};
int main()
{
 string n;  
    student a("Arvind");
    a.getName();
    return 0;
}