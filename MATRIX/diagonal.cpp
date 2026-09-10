#include <iostream>
using namespace std;
int diag(int mat[][3], int rows, int cols)
{
    int pd = 0;
    int sd = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                pd += mat[i][j];
            }
            if (j == rows - i - 1)
            {
                sd += mat[i][j];
            }
        }
    }
    return pd + sd;
}
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    cout << diag(mat, rows, cols) << endl;
}