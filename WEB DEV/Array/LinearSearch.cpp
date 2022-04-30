#include <bits/stdc++.h>
using namespace std;
#define n 5
int main()
{
    int arr[n];
    cout << "Enter THe array= ";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int key;
    cout << "Enter the no to be searched= ";
    cin >> key;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
        }
    }
    if (index >= 0)
    {
        cout<<key << " found"
             << " at position " << index;
    }
else
{
    cout<<"Not Found";
}
    return 0;
}