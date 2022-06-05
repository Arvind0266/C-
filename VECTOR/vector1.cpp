#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(100);
    v.push_back(50);
    v.push_back(300);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int>::iterator arvi;
    for (arvi = v.begin(); arvi < v.end(); arvi++)
    {
        cout << *arvi << endl;
    }

    for (auto element : v)
    {
        cout << element << endl;
    }
    vector<int> v1;
    v.swap(v1);
    sort(v.begin(), v.end());
    cout << 4;
    for (auto sort : v)
    {
        cout << sort << endl;
    }
   
}