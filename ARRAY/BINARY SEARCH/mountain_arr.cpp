#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr)
{
    int st = 1, end = arr.size() - 2; // first and last values are never the peak values
    int mid = st + (end - st) / 2;
    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) // peak value check
        {
            return mid;
        }

        if (arr[mid - 1] < arr[mid]) // mid lies in left side (inc) right search
        {
            st = mid + 1;
        }
        else // mid lies in right side(dec) left search
        {
            end = mid - 1;
        }
    }
    return -1; // shrinking condition
}
int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout << "PEAK INDEX IN MOUNTAIN ARRAY: " << search(arr) << endl;
}