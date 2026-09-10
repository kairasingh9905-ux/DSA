#include <iostream>
using namespace std;
bool search(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 4;
    int cols = 3;
    int keys = 8;
    if (search(mat, rows, cols, keys) == true)
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "NOT PRESENT" << endl;
    }
}