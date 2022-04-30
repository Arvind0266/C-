#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    int Matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    int row_start = 0, row_end = row - 1, column_start = 0, column_end = column - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int col = column_start; col <= column_end; col++)
        {
            cout << Matrix[row_start][col] << " ";
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout << Matrix[row][column_end] << " ";
        }
        column_end--;
        for (int col = column_end; col >= column_start; col--)
        {
            cout << Matrix[row_end][col] << " ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout<<Matrix[row][column_start]<<" ";
        }
        column_start++;
    }
}