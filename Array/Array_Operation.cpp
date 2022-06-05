#include <iostream>
using namespace std;
int *insert(int arr[], int n, int x, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    return arr;
}
int *deletion(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return arr;
}

int main()
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int x, pos, delpos;
    cin >> x;
    cin >> pos;

    cin >> delpos;
    insert(arr, n, x, pos);
    deletion(arr, n, delpos);

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}