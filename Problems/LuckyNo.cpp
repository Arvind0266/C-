#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number= ";
    cin >> n;
    int arr[n];
    int c = n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int del = 1;
    cout << endl
         << "Lucky Number Operation: ";
    while (del < n)
    {
        for (int i = del; i < n; i += del)
        {
            for (int j = 1; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
        }
        del++;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
    cout << "Hence Lucky Number less than " << c << " are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
   

    return 0;
}