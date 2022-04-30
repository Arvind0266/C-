#include <iostream>
using namespace std;
int main()
{
    int d1, m1, y1, d2, m2, y2, days = 0;
    cout << "Enter the date in the format DD MM YYYY to DD MM YYYY :";
    cin >> d1 >> m1 >> y1;
    cout << " -> ";
    cin >> d2 >> m2 >> y2;
    int arr1[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // int arr2[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = 0, month = 0;
    if ((y2 + m2) > (y1 + m1))
    {
        year = (y2 - y1);
    }
    else
    {
        year = 0;
    }

    if ((m2 - m1) != 0)
    {
        days = arr1[m1] - d1 + d2;
    }
    else
    {
        days = d2 - d1;
    }

    if ((m2 - m1) <= -1)
    {
        m2 = 12 + m2;
        month = m2 - m1 - 1;
    }
    else if ((m2 - m1) > 0)
    {
        month = m2 - m1 - 1;
    }
    else
    {
        month = 0;
    }
    if (days > 31)
    {
        month++;
        days -= 31;
    }

    cout << year << " Year " << month << " Month " << days << " Days ";
}
