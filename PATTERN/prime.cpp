#include <iostream>
using namespace std;
void primeS(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j++)
            {
                prime[i] = 1;
            }
        }
    }
        for (int i = 2; i <= n ; i++)
        {
            if (prime[i] == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    
}
int main()
{
    int no;
    cout << "Enter The Number= ";
    cin >> no;
    primeS(no);

    return 0;
}