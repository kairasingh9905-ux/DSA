#include <iostream>

using namespace std;

int max(int arr[], int sz)
{
    int b = INT_MIN; // - infinity
    int max = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > b)
        {
            b = arr[i];
            max = i;
        }
    }
    return max;
}
int min(int arr[], int sz)
{
    int a = INT_MAX; // +infinity
    int min = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < a)
        {
            a = arr[i];
            min = i;
        }
    }
    return min;
}
void swap(int &max_arr, int &min_arr)
{
    int temp = max_arr;
    max_arr = min_arr;
    min_arr = temp;
}
int main()
{
    int arr[] = {4, 2, 7, 8, 5};
    int sz = 5;
    int max_arr = max(arr, sz);
    int min_arr = min(arr, sz);
    swap(arr[max_arr], arr[min_arr]);
    cout << "SWAPPED ARRAY= ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}