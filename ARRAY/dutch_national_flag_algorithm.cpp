#include <iostream>
#include <vector>
using namespace std;
void sorting(vector<int> &arr, int n)
{
    int mid = 0, high = n - 1, low = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void printarr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {0, 1, 1, 2, 0, 2, 1, 0, 0};
    int n = arr.size();
    sorting(arr, n);
    printarr(arr, n);
}