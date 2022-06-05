#include <iostream>
using namespace std;
int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}
int main()
{

    int x=0;
    int n;
    cout << "Enter the number= ";
    cin >> n;
    int sum = sum_of_digits(n);
    while (sum >= 10)
    {
        x = sum_of_digits(sum);
        sum=x;
    }
    if (x == 1 || sum==1)
    {
        cout << "Magic Number";
    }
    else
    {
        cout << "Not magic number";
    }
    return 0;
}