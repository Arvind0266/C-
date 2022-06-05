#include <iostream>
using namespace std;
int main()
{
   int d1, m1, y1, d2, m2, y2, days = 0;
   cout << "Enter the date in the format DD MM YYYY to DD MM YYYY :";
   cin >> d1 >> m1 >> y1;
   cout << " -> ";
   cin >> d2 >> m2 >> y2;
   int arr1[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   // int arr2[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   if ((y2 + m2) > (y1 + m1))
   {
      days = (y2 - y1) * 365;
   }
   else
   {
      days = 0;
   }

   if ((m2 - m1) != 0)
   {
      days += arr1[m1] - d1 + d2;
   }
   else
   {
      days += d2 - d1;
   }

   if ((m2 - m1) <= -1)
   {
      m2 = 12 + m2;
   }
   for (int i = m1 + 1; i <= m2 - 1; i++)
   {
      days += arr1[i];
   }
   cout << days << " days ";
}
