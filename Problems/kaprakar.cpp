// #include <iostream>
// #include <cmath>
// using namespace std;
// int reverse(int n)
// {
//     int no = 1000;
//     int x = 0;
//     while (n > 0)
//     {
//         int r = n % 10;
//         x += r * no;
//         no /= 10;
//         n /= 10;
//     }
//     return x;
// }
// int main()
// {
//     int n;
//     cout << "Enter the numbe= ";
//     cin >> n;
//     int sum = 0;
//     int i;
//     for (i = 1; i < 8; i++)
//     {
//         sum = abs(reverse(n) - n);
//         if (sum == 6174)
//         {
//             cout << "Kaprakar Number";
//             break;
//         }
//         n = sum;
//     }
//     if (i == 8)
//         cout << "Not Kaprakar Number";
// }

