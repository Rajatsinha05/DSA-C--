#include <iostream>
#include <vector>
using namespace std;
void antidiagonal(vector<vector<int>> matrix, int rows, int col)
{
    int k = rows - 1;
    for (int i = 0; i < rows; i++)
    {

        cout << matrix[i][k--] << endl;
    }
}
void diagonal(vector<vector<int>> matrix, int rows, int col)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "-" << " ";
            }
        }
        cout << endl;
    }
}

void printZ(vector<vector<int>> matrix)
{

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        cout << matrix[0][i] << " ";
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << matrix[rows - 1][i] << " ";
    }
}
int main()
{

    vector<vector<int>> matrix = {
        {110, 20, 30, 40},
        {50, 60, 170, 80},
        {80, 190, 100, 110},
        {100, 200, 300, 400}
    };

    int row = matrix.size();
    int col = matrix[0].size();

    // antidiagonal(matrix, row, col);
    printZ(matrix);
    return 0;
}