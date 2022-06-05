#include <iostream>
using namespace std;
#define count 6
int main()
{
    int j;
    for (int i = 1; i <= count; i++)
    {
        int k = i;
        for (j = 1; j <= count; j++)
        {
            if (j <= count - i)
            {
                cout << "   ";
            }
            else
            {

                cout << " " << k << " ";
                k--;
            }
        }
        k = 2;
        for (; j <= count + i - 1; j++)
        {
            cout << " " << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}