// // #include <iostream>
// // using namespace std;
// // void repeat(int arr[], int n)
// // {

// //     for (int i = 0; i < n -1; i++)
// //     {
// //         for (int j = i+1; j < n; j++)
// //         {
// //             if (arr[i] == arr[j])
// //             {
// //                 cout << i << endl;
// //                 return;
// //             }
// //       }
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //    repeat(arr, n);
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     const int N = INT16_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int idx[N];
//     for (int i = 0; i < N; i++)
//     {
//         idx[i] = -1;
//     }
//     int minidx = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (idx[arr[i]] != -1)
//         {
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else
//         {
//             idx[arr[i]] = i;
//         }
//     }
//     if (minidx == INT_MAX)
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         cout << minidx + 1 << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e5;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i + 1;
        }
    }
    
        cout << minidx << endl;
    
}