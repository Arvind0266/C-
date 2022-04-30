#include <iostream>
using namespace std;
class vector
{
    int x, y, z;

public:
    vector() {}
    vector(int a, int b, int c) : x(a), y(b), z(c)
    // vector(int a,int b,int c)
    {
        // x=a;
        // y=b;
        // z=c;
    }
    vector operator--(int i)
    {
        i = 1;
        x -= i;

        y -= 1;
       z-= 1;
        return *this;
    }
    void show()
    {
        cout << x << "i+" << y << "j+" << z << "k" << endl;
    }
};
int main()
{
    vector a(10, 20, 30), b(1, 2, 3), c;
    cout << "\n Vector A: " << endl;
    a.show();
    a--;
    cout << "\n After Decrement a:" << endl;
    a.show();
    // cout << "Vector B: " << endl;
    // b.show();
    // c = a - b;
    // cout << "Addition of vector A - vector B " << endl;
    // cout << "vector C" << endl;
    // c.show();
    return 0;
}