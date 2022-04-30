#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter a positive integer: ";
 cin >> n;
//  for (int i = 1; i <= 10; ++i) {
//  cout << n << " * " << i << " = " << n * i << endl;
 
//  }
while(n>0)
{
int r=n%10;
 cout<<~10001<<endl;
 n/=10;
}
 return 0;
}