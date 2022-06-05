#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}
void inc(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }

    inc(n - 1);
    cout << n << " ";
}
void dec(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
int main()
{
    int n;
    cin >> n;
    // cout<<sum(n)<<endl;
    // cout<<factorial(n);
    // cout<<fibonacci(n);
    // cout<<power(n,2);
  //  inc(n);
  dec(n);
}