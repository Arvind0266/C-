#include <iostream>
using namespace std;
class A
{
public:
    string name;
    void print1()
    {
        cout << "The Name of the student is " << name << endl;
    }
};
class B : public A
{
public:
    int roll;
    void print2()
    {

        cout << "The Roll of the student is " << roll << endl;
    }
};
class C : public B
{
    int marks;

public:
    void setmarks(int m)
    {
        marks = m;
    }
    void print3()
    {
        cout << "Marks = " << marks;
    }
};
int main()
{
    C obj;
    obj.name = "Ajwdje ejkfh";
    obj.roll = 23;
    obj.setmarks(132);
    obj.print1();
    obj.print2();
    obj.print3();
    return 0;
}