#include <iostream>
using namespace std;
class c1
{
    int a;

public:
    void func(int x)
    {
        a = x;
    }
    void print()
    {
        cout << "Object Created " << a << endl;
    }
    ~c1()
    {
        cout << "Object Destroyed " << a << endl;
    }
};
int main()
{
    c1 obj1, obj2, obj3;
    obj1.func(1);
    obj1.print();

    obj2.func(2);
    obj2.print();

    obj3.func(3);
    obj3.print();
}
