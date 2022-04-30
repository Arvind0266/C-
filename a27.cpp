#include <iostream>
using namespace std;
class population
{
    float p, r;

public:
    population(float a, float b)
    {
        p = a;
        r = b;
    }
    void print();
};
void population::print()
{
    float a = p * (1 + r / 100);
    for (int i = 1; i < 8; i++)
    {

        cout << "Population at the end of 200" << i << " is: " << a * i << endl;
    }
}
int main()
{

    float initpop, rate;
    cout << "Enter Initial population at the end of year 2000: ";
    cin >> initpop;
    cout << "Enter growth rate from year 2001 to 2007 : ";
    cin >> rate;
    population india(initpop, rate);
    india.print();

    return 0;
}