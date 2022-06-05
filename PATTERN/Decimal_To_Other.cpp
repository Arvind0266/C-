#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    // cin>>n;
    int arr[10];
    int i = 0;
    int rem=0;

    while (n)
    {
        rem = n % 2;
        
        arr[i] = rem;
        n = n / 2;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        cout << arr[j] << " ";
    }
    
    return 0;
}