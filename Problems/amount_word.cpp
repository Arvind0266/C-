#include <iostream>
#include <cstring>
using namespace std;
void Amount_Word(int amt)
{
    string arr1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleveen", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    string arr2[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    // For Amount less than 100
    if (amt < 100)
    {
        if (amt <= 20)
        {
            cout << arr1[amt] << " ";
        }
        else if (amt >= 21 && amt <= 99)
        {
            int x = amt % 10;
            int y = amt / 10;
            cout << arr2[y - 1] << " ";
            cout << arr1[x] << " ";
        }
    }
    // For Amount greater than or equal to 100 and less than 1000
    if(amt >= 100 && amt < 1000)
    {
        else if (amt % 100 == 0 && amt < 1000)
        {
            int x = amt / 100;
            cout << arr1[x] << " hundred ";
        }

        else if (amt > 100 && amt <= 999)
        {
            int x = amt % 100;
            int z = amt / 100;
            cout << arr1[z] << " hundred ";

            if (x <= 20)
            {
                cout << arr1[x] << " ";
            }
            else if (x >= 21 && x <= 99)
            {
                int z = x % 10;
                int y = x / 10;
                cout << arr2[y - 1] << " " << arr1[z] << " ";
            }
        }
        
    }

    // For Amount Greater than and equal to 1000 and 10000.

    if (amt >= 1000 && amt <= 9999)
    {
        if (amt % 1000 == 0 && amt < 10000)
        {
            int x = amt / 1000;
            cout << arr1[x] << " thousand ";
        }
        else if (amt > 1000 && amt < 10000)
        {
            int k = amt / 1000;
            cout << arr1[k] << " thousand ";
            amt = amt % 1000;

            if (amt % 100 == 0)
            {
                int x = amt / 100;
                cout << arr1[x] << " hundred ";
            }

            else if (amt <= 20)
            {
                cout << arr1[amt] << " ";
            }
            else if (amt >= 21 && amt <= 99)
            {
                int x = amt % 10;
                int y = amt / 10;
                cout << arr2[y - 1] << " ";
                cout << arr1[x] << " ";
            }
            else if (amt > 100 && amt <= 999)
            {
                int x = amt % 100;
                int z = amt / 100;
                cout << arr1[z] << " hundred ";

                if (x <= 20)
                {
                    cout << arr1[x] << " ";
                }
                else if (x >= 21 && x <= 99)
                {
                    int z = x % 10;
                    int y = x / 10;
                    cout << arr2[y - 1] << " " << arr1[z] << " ";
                }
            }
        }
    }

   
}
int main()
{
    cout << "Enter Amount = ";
    int amt;
    cin >> amt;
    Amount_Word(amt);

    return 0;
}