#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "Enter Decimal number= ";
    cin >> n;
    int ch;
    cout << "1-Binary "
         << " 2-Octal "
         << "3-Hexa-Decimal  ";
     cin >> ch;
    switch (ch)
    {
    case 1:
    {
        int x = 1;
        int binary = 0;
        while (x <= n)
        {
            x *= 2;
        }
        x /= 2;
        while (x > 0)
        {
            int r = n / x;
            n -= r * x;
            x /= 2;
            binary = binary * 10 + r;
        }
        cout << "Binary Equivalent= " << binary << endl;

        break;
    }
    case 2:
    {
        int x = 1;
        int octal = 0;
        while (x <= n)
        {
            x *= 8;
        }
        x /= 8;
        while (x > 0)
        {
            int r = n / x;
            n -= r * x;
            x /= 8;
            octal = octal * 10 + r;
        }
        cout << "Octal Equivalent= " << octal << endl;

        break;
    }
    case 3:
    {
        int x = 1;
        string hexadecimal;
        while (x <= n)
        {
            x *= 16;
        }
        x /= 16;
        cout << "Hexa Decimal Equivalent = ";
        while (x > 0)
        {
            int r = n / x;
            n -= r * x;
            x /= 16;
            if (r <= 9)
            {
                cout << r;
            }
            else if (r >= 10 && r <= 16)
            {
                hexadecimal = r + 55;
                cout << hexadecimal;
            }
        }

        break;
    }
    default:
    {
        cout << "Not A Case" << endl;
    }
    break;
    }
}