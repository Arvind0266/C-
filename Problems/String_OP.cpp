#include <iostream>
using namespace std;
int main()
{
    string st;
    cout << "Enter The String= ";
    getline(cin, st);
    int n = st.size();
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {
            
            if(st[i]==32)
            {
                continue;
            }
           
            if ((st[j] >= 65 && st[j] <= 90) || (st[j] >= 97 && st[j] <= 122) || st[j] == 32)
            {
                cout << st[j];
            }
            else
            {
              continue;
            }
        }
        if (st[i]==32)
        {
            continue;
        }
        
        else {
             cout << endl;
      }
    }
    string s;
    s = s + st[n - 2] + st[n - 1] + st[n - 1] + st[n - 1] + st[n - 1] + st[n - 1];
    cout << s << " Let's get drunk";
}