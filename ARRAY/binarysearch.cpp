#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] < tar)
        {
            st = mid + 1;
        }
        else if (arr[mid] > tar)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;
    cout << search(arr, tar) << endl;
}
