// WAP to find the unique digit number
#include <iostream>
using namespace std;
/*int no_of_digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int r = n % 10;
        count++;
        n /= 10;
    }
    return count;
} */
int main()
{
    int n,m,count=0,r;
    int arr[23];
    cout << "Enter the number= ";
    cin >> n;
    m=n;
    while(n>0)
    {
        r=n%10;
        arr[count]=r;
        n=n/10;
        count++;
    }
int temp=0;

//    int arr[no];
    //int count = 0;
    for (int i = 0; i <count; i++)
    {
        for (int j = i+1;j <count; j++)
        {
            if (arr[i] == arr[j])
            {
                temp++;
                break;
            }
        }
    }
    if (temp >0)
    {
        cout << "Not Unique Number";
    }
    else
    {
        cout << "Unique Number";
    }
}
// int main()
// {
//     int n;
//     cout << "Enter the no element= ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array= " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[i] = 0;
//             }
//             else
//             {
//                 arr[i] = arr[i];
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }