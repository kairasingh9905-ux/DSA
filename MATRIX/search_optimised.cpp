#include <iostream>
#include <vector>
using namespace std;
bool indx(vector<vector<int>> &mat, int tar, int row)
{
    int n = mat[row].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mat[row][mid] == tar) // target found
        {
            return true;
        }
        else if (tar > mat[mid][row]) // target is greater than mid
        {
            st = mid + 1;
        }
        else // target is lesser than mid
        {
            end = mid - 1;
        }
    }
    return false;
}
bool search(vector<vector<int>> &mat, int tar)
{
    int m = mat.size(), n = mat[0].size(); // m= matrix size n= size of the row
    int st = 0, end = m - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        {
            if (mat[mid][0] <= tar && mat[mid][n - 1] >= tar) // row found
            {
                return indx(mat, tar, mid); // for binary search in a a row
            }
            else if (mat[mid][n - 1] <= tar) // if target is below mid row
            {
                st = mid + 1;
            }
            else // if target is above mid row
            {
                end = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int tar = 11;
    cout << search(mat, tar) << endl;
}
