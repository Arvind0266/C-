#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Range= ";
    cin >> n;
    int j;
    int temp;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        temp = i;
        for (; j <= n; j++)
        {
            cout << " " << temp;
            temp++;
        }
        temp = 2 * i - 2;
        for (; j <= n + i - 1; j++)
        {
            cout << " " << temp;
            temp--;
        }
        cout << endl;
    }
}