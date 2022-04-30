#include <iostream>
#include <math.h>
using namespace std;
void triplet(int a, int b, int c)
{
    int x, y, z;
    x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else if (x == c)
    {
        y = a;
        z = b;
    }

    if(x*x=y*y+z*z)
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not pythagorean triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Three number = ";
    cin >> a >> b >> c;
    triplet(a, b, c);
    return 0;
}