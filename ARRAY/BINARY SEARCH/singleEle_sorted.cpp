#include <iostream>
#include <vector>
using namespace std;
int single(vector<int> arr)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        { // single ele comdition
            return arr[mid];
        }
        if (mid % 2 == 0)
        { // even L&R
            if (arr[mid - 1] == arr[mid])
            { // left search
                end = mid - 1;
            }
            else
            { // right search
                st = mid + 1;
            }
        }
        else
        { // odd L&R
            if (arr[mid - 1] == arr[mid])
            { // right serach
                st = mid + 1;
            }
            else
            { // left seach
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 8};
    cout << "SINGLE ELEMENT IN ARRAY(INDEX): " << single(arr) << endl;
}