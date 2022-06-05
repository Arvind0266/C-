#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char ch;
}em;



int main()
{
    struct  employee arvind;
    em arvi;
 arvind.eid=12;
 arvind.ch='A';
 cout<<arvind.eid<<endl;
 cout<<arvind.ch<<endl;
  arvi.eid=123;
 arvi.ch='E';
 cout<<arvi.eid<<endl;
 cout<<arvi.ch<<endl;

    



return 0;
}
