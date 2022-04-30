#include <iostream>
using namespace std;
void deletion(int arr[], int size, int pos)
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int n;
    cout << "Enter the Range= ";
    cin >> n;
    int arr[n];
    int k = 0, x = n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    cout << "Lucky Operations are= " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //1st part
    int p = 1;
    while (p < n)
    {
        for (int i = p; i < n; i += p)
        {
            deletion(arr, n, i);
            n--;
            k++;
        }
        for (int i = 0; i < x - k; i++)
        {
            cout << arr[i] << " ";
        }
        p++;
        cout << endl;
    }
    cout << "Hence Lucky Number Less than " << x << " are ";
    for (int i = 0; i < x - k; i++)
    {
        cout << arr[i] << " ";
    }

    //     //2nd part
    //      for (int i = 2; i < n; i+=2)
    //     {
    //         deletion(arr, n, i);
    //         n--;
    //         k++;
    //     }
    //     for (int i = 0; i <x-k; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // cout<<endl;
    // //     //3rd part
    //     for (int i = 3; i < n; i+=3)
    //     {
    //         deletion(arr, n, i);
    //         n--;
    //         k++;
    //     }
    //     for (int i = 0; i <x-k; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    return 0;
}
