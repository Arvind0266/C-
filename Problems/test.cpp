#include <iostream>
using namespace std;
int main()
{
    int arr1[4];
    int arr2[4];
    int sum[5] = {0, 0, 0, 0, 0};
    cout << "Enter the 1st Binary Number= ";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter 2nd Binary Number= ";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr2[i];
    }
    cout << "  ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl
         << "  ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 3; i >= 0; i--)
    {

        int x = (arr1[i] + arr2[i] + sum[i + 1]);
        if (x <= 1)
        {
            sum[i+1] = x;
        }
        else if (x == 2)
        {
            sum[i ] += 1;
            sum[i+1] = 0;
        }
        else if (x == 3)
        {
            sum[i] += 1;
            sum[i+1] = 1;
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << sum[i] << " ";
    }
}