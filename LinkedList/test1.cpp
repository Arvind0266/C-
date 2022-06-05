#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[4];
    int e, i, j, temp;
    int n, m1, m2, m3, m4, a, b, c, d, sum, rev;
    sum = 0;
    rev = 0;
    cout << "Enter a number= ";
    cin >> n;
    for (e = 1; e <= 7; e++)
    {
        m1 = (n / 1000);
        n =( n % 1000);
        m2 = (n / 100);
        n = (n % 100);
        m3 = n / 10;
        m4 = n % 10;
        arr[0] = m1;
        arr[1] = m2;
        arr[2] = m3;
        arr[3] = m4;
 
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
 
        a = arr[0];
        b = arr[1];
        c = arr[2];
        d = arr[3];
        sum = a * 1000 + b * 100 + c * 10 + d;
        rev = d * 1000 + c * 100 + b * 10 + a;
        cout << rev << "," << sum << endl;
        if (abs( sum-rev) == 6174)
        {
            cout << "Kapraker Number=" <<abs (rev - sum) << endl;
            break;
        }
        else
        {
            cout << "Not Kapraker Number" << abs(rev - sum) << endl;
            n = sum - rev;
            continue;
        }
       // n=sum;
    }
    return 0;
}