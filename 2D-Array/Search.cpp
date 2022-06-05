// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout<<"Enter the row and column = ";
//     cin >> n >> m;
//     int target;int x=0;
//     cout<<" enter target";
//     cin >> target;
//     int Matrix1[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> Matrix1[i][j];
//         }
//     }
//  //   bool flag = false;
  
  
//     int r = 0, c = m - 1;
//     while ((r <= n-1) && (c >=0))
//     {
//         if (Matrix1[r][c] == target)
//         {
//            // flag = true;
//            x=2;
//         }
//         else if (Matrix1[r][c]<target)
//         {
//             r++;
//         }

//         else 
//         {
//             c--;
//         }
//     }
//     // if (flag)
//     // {
//     //     cout << "Found";
//     // }
//     // else
//     // {
//     //     cout << "Not Found";
//     // }
//     cout<<x;
// }
// /*
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int target;
//     cin >> target;
//     int mat[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
//     bool found = false;
//    int x=0;
//     int r = 0, c = m - 1;
//     while (r < n && c >= 0)
//     {
//         if (mat[r][c] == target)
//         {
//             found = true;
//             x=1;
//         }
//         else if(mat[r][c] > target) {
//          c--;}
//          else {
//          r++;
//          }
//     }
//     if (found)
//         cout << "Found";
//     else
//         cout << "Not Found";
//         cout<<endl<<x;
// }*/
#include <iostream>
using namespace std;
int main() {
 int n, m; cin >> n >> m;
 int target; cin >> target;
 int mat[n][m];
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < m; j++) {
 cin >> mat[i][j];
 }
 }
 bool found = false;
 int r = 0, c = m - 1;
 while (r < n && c >= 0) {
 if (mat[r][c] == target) {
 found = true;
 }
 mat[r][c] > target ? c-- : r++;
 }
 if (found)
 cout << "Found";
 else
 cout << "Not Found";

}
