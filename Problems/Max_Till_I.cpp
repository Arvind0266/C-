#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the Elements of the array= ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int max = INT_FAST8_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        cout << max << " ";
    }
}