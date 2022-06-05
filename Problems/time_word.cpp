#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string arr1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string arr2[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty"};
    string arr3[] = {"eleveen", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    int h, m;
    cout << "Enter The Time" << endl;
    cout << "Enter Hour: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;
    if (h <= 9)
    {
        cout << arr1[h] << " hour ";
    }
    else if (h == 10)
    {
        cout << arr2[0] << " hour ";
    }
    else
    {
        int r = h % 10;
        cout << arr3[r - 1] << " hour ";
    }

    if (m <= 9)
    {
        cout << arr1[m] << " ";
    }
    else if (m > 10 && m < 20)
    {
        cout << arr3[m - 11] << " ";
    }
    else if (m > 20)
    {
        int m1, m2;
        m1 = m % 10;
        m2 = m / 10;
        cout << arr2[m2 - 1] << " ";
        cout << arr1[m1] << " ";
    }
    else if (m == 10)
    {
        cout << arr2[0] << " ";
    }
    cout << " minutes";

    return 0;
}