#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string st1 ;
    cin>>st1;
    string st2 ;
    cin>>st2;
    string st3 ;
    cin>>st3;
    int count = 0;
    // case1:
    cout << "Letters Common On all the Three words are= ";
    for (int i = 0; i < st1.size(); i++)
    {
        for (int j = 0; j < st2.size(); j++)
        {
            if (st1[i] == st2[j])
            {
                for (int k = 0; k < st3.size(); k++)
                {
                    if (st1[i] == st3[k])
                    {
                        cout << st3[k] << " ";
                        break;
                    }
                }
            }
        }
    }
    cout << endl;

    // case2:
    cout << "Letters Common On First Two words but not in third word= ";
    for (int i = 0; i < st1.size(); i++)
    {
        count = 0;
        for (int j = 0; j < st2.size(); j++)
        {
            if (st1[i] == st2[j])
            {
                for (int k = 0; k < st3.size(); k++)
                {
                    if (st1[i] != st3[k])
                    {
                        count++;
                    }
                }
                if (count == st3.size())
                {
                    cout << st1[i] << " ";
                    break;
                }
            }
        }
    }
    cout << endl;

    // case 3:
    cout << "Letters in First word but not in second and third word= ";
    for (int i = 0; i < st1.size(); i++)
    {
        count = 0;
        for (int j = 0; j < st2.size(); j++)
        {
            if (st1[i] != st2[j])
            {
                for (int k = 0; k < st3.size(); k++)
                {
                    if (st1[i] != st3[k])
                    {
                        count++;
                    }
                }
            }
            count++;
        }
        int size = (st2.size() * st3.size() + st2.size());
        if (count == size)
        {
            cout << st1[i] << " ";
            break;
        }
    }
    cout << endl;
    // case4:

    cout << "Letters in All the three words= ";
    string st4;
    st4 = st4 + st1 + st2 + st3;
    for (int i = 0; i < st4.size(); i++)
    {
        count = 0;
        for (int j = i + 1; j < st4.size(); j++)
        {
            if (st4[i] == st4[j])
                count++;
        }
        if (count == 0)
            cout << st4[i] << " ";
    }
}