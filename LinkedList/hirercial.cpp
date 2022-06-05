#include <iostream>
using namespace std;
class A
{
public:
    string name;
    int roll;
    void print1()
    {
        cout << "The Name of the student is " << name << endl;
        cout << "The Roll of the student is " << roll << endl;
    }
};
class B : public A
{
    int math;

public:
    void setmath(int m)
    {
        math = m;
    }
    void print2()
    {
        print1();
        cout << "Math marks= " << math << endl;
    }
};

class C : public A
{
    int phys;

public:
    void setphys(int m)
    {
        phys = m;
    }
    void print3()
    {
        print1();
        cout << "Physics marks= " << phys << endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.name = "ABC";
    obj1.roll = 23;
    obj1.setmath(12);
    obj1.print2();

    obj2.name = "DEF";
    obj2.roll = 12;
    obj2.setphys(20);
    obj2.print3();
}
