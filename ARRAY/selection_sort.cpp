#include <iostream>
using namespace std;
void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int si = i; // by default its 0th index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[si]) // comparing 0th index and 1st element
            {
                si = j;
            }
        }
        swap(arr[i], arr[si]); // sorting the arr
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int arr[] = {4, 1, 2, 5, 3};
    selection(arr, n);
    printarr(arr, n);
}