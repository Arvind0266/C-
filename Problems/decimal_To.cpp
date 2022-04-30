#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int arr[100];

    while (n > 0)
    {
        arr[c] = n % 8;

        n /= 8;
        c++;
    }
    for (int i = c - 1; i >= 0; i--)
    {

        cout << arr[i] << " ";
    }
}