#include <iostream>
using namespace std;
int sum(int mat[][3], int rows, int cols)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            row_sum += mat[i][j];
        }
        max_sum = max(row_sum, max_sum);
    }
    return max_sum;
}
int main()
{
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 4;
    int cols = 3;
    cout << sum(mat, rows, cols) << endl;
}