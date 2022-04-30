#include <iostream>
using namespace std;
int main()
{
    string st;
    cout << "Enter the string= ";
    getline(cin, st);
    int jump;
    cout << "Enter Jump value= ";
    cin >> jump;
    for (int i = 0; i < st.size(); i++)
    {
        if (jump + int(st[i]) <= 90)
        {
            st[i] += jump;
        }
        else
        {
            st[i] -= (26 - jump);
        }
    }
    cout << st;
}