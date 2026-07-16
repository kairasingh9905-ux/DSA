#include <iostream>
using namespace std;
void reverse(int arr[], int sz)
{
    int start = 0;
    int end = (sz - 1);
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {4, 2, 7, 8, 2, 5};
    int sz = sizeof(arr) / sizeof(int);
    reverse(arr, sz);
    cout << "REVERSED ARRAY= ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}