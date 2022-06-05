#include <iostream>
using namespace std;
int main()
{
    int m, n, o;
    cin >> m >> n >> o;
    int Matrix1[m][n], Matrix2[n][o];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Matrix1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cin >> Matrix2[i][j];
        }
    }
    int Matrix3[m][o];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            Matrix3[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            for (int k = 0; k < n; k++)
            {

                Matrix3[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << Matrix3[i][j] << " ";
        }
        cout << endl;
    }
}