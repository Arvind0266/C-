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
    cout << "Enter the size of array= ";
    cin >> n;
    int k = 0;
    int x = n;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    cout<<"Lucky Operations are= "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 1st part
    for (int i = 1; i < n; i++)
    {
        deletion(arr, n, i);
        n--;
        k += 1;
    }
    for (int i = 0; i < x - k; i++)
    {
        cout << arr[i] << " ";
    }

    // 2nd part
    cout << endl;
    for (int i = 1; i < n; i += 2)
    {
        deletion(arr, n, i);
        n--;
        k += 1;
    }
    for (int i = 0; i < x - k; i++)
    {
        cout << arr[i] << " ";
    }
    //3rd part
    cout << endl;
    for (int i = 1; i < n; i += 2)
    {
        deletion(arr, n, i);
        n--;
        k += 1;
    }
    for (int i = 0; i < x - k; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}