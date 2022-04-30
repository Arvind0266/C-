#include <iostream>
using namespace std;
class arvi
{
    int x, y;

public:
    // arvi()
    // {
    //     cout << "Enter two no= ";
    //     cin >> x >> y;
    // }
    arvi(int a,int b)
    {
        x=a;
        y=b;
        // cout<<"Entre two numbers= ";
        // cin>>a>>b;
    }
    int sum()
    {
        int sum;
        sum = x + y;
      return sum;
    }
};
int main()
{
    int p,q;
    cout<<"Entre two numbers= ";
   cin>>p>>q;
   
    arvi a(p,q);
   cout<<"sum= "<<a.sum();

    return 0;
}