#include <iostream>
using namespace std;
class base1
{
protected:
    int a1;

public:
    void getBase1(int a)
    {
        a1 = a;
    }
};
class base2
{
protected:
    int a2;

public:
    void getBase2(int a)
    {
        a2 = a;
    }
};
class base3
{
protected:
    int a3;

public:
    void getBase3(int a)
    {
        a3 = a;
    }
};
class Derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << a1 << endl;
        cout << "The value of Base2 is " << a2 << endl;
        cout << "The value of Base3 is " << a3 << endl;
        cout << "The sum of these values is " << a1 + a2 + a3 << endl;
    }
};

int main()
{
    Derived arvind;
    arvind.getBase1(10);
    arvind.getBase2(20);
    arvind.getBase3(30);

    arvind.show();

    return 0;
}