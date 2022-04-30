#include <iostream>
using namespace std;
int main()
{

    int num;
    

    cout << "enter the size of array: ";
    cin >> num;
    int arr[num];
    cout << " your array is: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= 35 && arr[i] <= 65)
        {
            cout << " normal" << endl;
        }
        else if (arr[i] > 65)
        {
            cout << " overload" << endl;
        }
        else if (arr[i] < 35)
        {
            cout << " underload" << endl;
        }
    }

    return 0;
}