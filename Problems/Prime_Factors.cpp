#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10] = {};
    int i = 2;
    int c = 0;
    while (n > 1)
    {
        if (n % i == 0)
        {
            arr[c] = i;
            n /= i;
            c++;
        }
        else
            i++;
    }

    for (int j = 0; j < c; j++)
    {
            cout << arr[j] << " ";
    }
}