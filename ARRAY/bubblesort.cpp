#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++) // outer loop for iterations
    {
        for (int j = 0; j < n - i - 1; j++) // inner loop to check two numbers and for inner iterations
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();
    bubble(arr);
    printarr(arr, n);
}
