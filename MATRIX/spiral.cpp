#include <iostream>
using namespace std;
void spiral(int mat[][4], int rows, int cols)
{
    int strow = 0, stcol = 0, endrow = cols - 1, endcols = rows - 1;
    while (strow <= endrow && stcol <= endcols)
    {
        for (int i = stcol; i <= endcols; i++) // for top
        {
            cout << mat[strow][i] << " ";
        }
        for (int i = strow + 1; i <= endrow; i++) // for right
        {
            cout << mat[i][endcols] << " ";
        }
        for (int i = endcols - 1; i >= stcol; i--) // for bottom
        {
            cout << mat[endrow][i] << " ";
        }
        for (int i = endrow - 1; i >= strow + 1; i--) // for left
        {
            cout << mat[i][stcol] << " ";
        }
        strow++;
        stcol++;
        endrow--;
        endcols--;
    }
}
int main()
{
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int rows = 4;
    int cols = 4;
    spiral(mat, rows, cols);
}