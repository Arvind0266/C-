#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point();
    friend double dist(point, point);
    void getno()
    {
    }
    void print()
    {
        cout << "The point is= (" << x << "," << y << ")" << endl;
    }
};
point::point()
{

    cout << "Enter x and y coordinate ";
    cin >> x >> y;
}
double dist(point p1, point p2)
{
    double dist = sqrt(pow((p1.x - p2.x), 2) + (pow((p1.y - p2.y), 2)));
    return dist;
}
int main()
{
    point a;
    a.print();
    point b;
    b.print();
    double c = dist(a, b);
    cout << "The distance is= " << c << endl;

    return 0;
}