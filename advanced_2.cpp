#include <iostream>
using namespace std;
#define n 5
int main()
{
    int j;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        // for (j=1; j <= 2*i-1; j++)
        // {
        for (; j <= n + i - 1; j++)
        {
            if (j == n - i + 1 || j == n + i - 1)
                cout << "   ";
            else
                cout << " * ";
        }
        for (; j <= 2 * n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                cout << "   ";
            else
                cout << " * ";
        }
        for (; j <= 2*n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}