#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // optimised mid formula
        if (arr[mid] == tar)
        {
            return mid;
        }
        if (arr[st] <= arr[mid]) // left binary search
        {
            if (arr[st] <= tar && tar <= arr[mid]) // left serach
            {
                end = mid - 1;
            }
            else // right search
            {
                st = mid + 1;
            }
        }
        else // right binary search
        {
            if (arr[mid] <= tar && tar <= arr[end]) // right search
            {
                st = mid + 1;
            }
            else // left search
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int tar = 0;
    cout << "TARGET ELEMENT AT INDEX(through rotated array) :" << search(arr, tar) << endl;
}