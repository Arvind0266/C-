#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    int c,l,r;
    while (n--)
    {
       
        cin >> l >> r;
   c=0;
        for (int i = l; i <= r; i++)
        {
            int x=i%10;
            if (x==2 || x==3 || x==9)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}