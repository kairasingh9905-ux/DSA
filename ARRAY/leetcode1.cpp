#include <iostream>
#include <vector>
using namespace std;

vector<int> check(int arr[], int target, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << "," << j << "]" << endl;
                return {i, j};
            }
        }
    }
    return {};
}
int main()
{
    int sz = 3;
    int target = 9;
    int arr[3] = {3, 6, 2};
    check(arr, target, sz);
}
