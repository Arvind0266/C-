#include <iostream>
using namespace std;
#include <vector>
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    // int element;
    // vec1.push_back(1);
    vector<int>::iterator iter = vec1.begin();
    // display(vec1);
    vec1.insert(iter,5,0);
    display(vec1);
    cout<<vec1.at(4);
    cout<<vec1[4];
}
