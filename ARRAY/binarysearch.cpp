#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] < tar) // 2nd half of the array
        {
            st = mid + 1;
        }
        else if (arr[mid] > tar) // 1st half of the array
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
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << "ODD ARRAY : " << search(arr1, tar1) << endl;
    vector<int> arr2 = {-1, 0, 3, 4, 9, 1};
    int tar2 = 0;
    cout << "EVEN ARRAY: " << search(arr2, tar2) << endl;
}
