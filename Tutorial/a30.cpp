#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 2;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }
    ~Number()
    {
        cout << "Destructor is called " << endl;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number a;
    {
        a.display();

        Number b, c(5);

        b.display();
        c.display();
        Number d(45);
        d.display();
    }
    Number e = a;
    e.display();
    return 0;
}