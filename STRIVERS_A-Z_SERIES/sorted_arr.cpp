#include <iostream>
#include <vector>
using namespace std;
bool sorted(vector<int> arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) // check from previous
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << sorted(arr, n) << endl;
}
