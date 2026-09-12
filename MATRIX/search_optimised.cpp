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
        if (mat[row][mid] == tar)
        {
            return true;
        }
        else if (tar > mat[mid][row])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool search(vector<vector<int>> &mat, int tar)
{
    int m = mat.size(), n = mat[0].size();
    int st = 0, end = m - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        {
            if (mat[mid][0] <= tar && mat[mid][n - 1] >= tar)
            {
                return indx(mat, tar, mid);
            }
            else if (mat[mid][n - 1] <= tar)
            {
                st = mid + 1;
            }
            else
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
