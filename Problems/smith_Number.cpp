#include <iostream>
using namespace std;
int sum_of_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sum_of_primeFactors(int n)
{
    int i = 2;
    int sum = 0;int count=0;
    while ((n > 1))
    {
        
        if (n % i == 0)
        {
            sum += sum_of_digit(i);
            n /= i;
            count++;
        }
        else
            i++;
       
    }
 if(count>1)
    return sum;
    else
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << "Sum of digits= " << sum_of_digit(n) << endl;
    cout << "sum of prime factors= " << sum_of_primeFactors(n) << endl;
    if (sum_of_digit(n) == sum_of_primeFactors(n))
        cout << "Smith Number";
    else
        cout << "Not Smith Number";
    return 0;
}