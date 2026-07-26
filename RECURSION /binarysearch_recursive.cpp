#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int tar, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] > tar)
        {
            return search(arr, tar, st, mid - 1);
        }
        else if (arr[mid] < tar)
        {
            return search(arr, tar, mid + 1, end);
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
    vector<int> arr = {-1, 0, 4, 5, 9, 12};
    int tar = 12;
    int st = 0, end = arr.size() - 1;
    cout << search(arr, tar, st, end) << endl;
}