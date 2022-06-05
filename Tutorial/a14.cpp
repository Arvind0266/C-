#include <iostream>
#include <string>
using namespace std;
class nesting
{
    string s;
    void checkbin(void);

public:
    void readbin(void);
    void onesCompliment(void);
    void dispay(void);

};
void nesting ::readbin(void)
{
    cout << "Enter A binary number = ";
    cin >> s;
}
void nesting::checkbin(void)
{
     for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void nesting::onesCompliment(void)
{
  checkbin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
      else   
        {
            s.at(i) = '0';
        }
    }
}
void nesting::dispay(void)
{
      checkbin();
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
        /* code */
    }
    cout<<endl;
}
int main()
{
    nesting arvind;
    arvind.readbin();
   arvind.dispay();
    arvind.onesCompliment();
 arvind.dispay();
    return 0;
}