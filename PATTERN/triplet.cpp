#include <iostream>
#include <cmath>
using namespace std;
void triplet(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter Three numbers= ";
    cin >> a >> b >> c;
    triplet(a, b, c);
    return 0;
}
void triplet(int x, int y, int z)
{
    int p, q, r;
    p = max(x, max(y, z));
    if(p==x)
    {
        q=y;
        r=z;
    }
    else if(p==y)
    {
        q=x;
        r=z;

    }
    else{
        q=x;
        r=y;
    }
    int a;
    // if(p==sqrt(q*q+r*r))
    // {
        if(p==hypot(q,r)){
                cout<<"Pythagorean Triplet"<<endl;
    }
    else {
        cout<<"Not Pythagorean Triplet"<<endl;;
    }
}