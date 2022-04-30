#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string st;
    cout << "Enter the string= ";
    getline(cin, st);
    int ch;
    cout << "1-UPPER CASE, 2-lower case,3-Title Case,4-tOOGLE cASE" << endl;
    cout << "Enter the Choice= ";
    cin >> ch;
    switch (ch)
    {

    case 1:
    {
        transform(st.begin(), st.end(), st.begin(), ::toupper);
        cout << st;
        break;
    }
    case 2:
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout << st;
        break;
    }
    case 3:
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        st[0] = st[0] - 32;
        for (int i = 1; i < st.size(); i++)
        {
            if (st[i] == ' ')
            {
                st[i + 1] -= 32;
            }
        }
        cout << st;
        break;
    }
    case 4:
    {
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] >= 97 && st[i] <= 122)
            {
                st[i] -= 32;
            }
            else if (st[i] >= 65 && st[i] <= 90)
            {
                st[i] += 32;
            }
        }
        cout << st;
        break;
    }
    default:
    {
        cout << "Not a Case";
    }
    }
}
