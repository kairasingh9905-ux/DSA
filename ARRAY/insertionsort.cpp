#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) // checking if the current value is lesser than its prev value
        {
            arr[prev + 1] = arr[prev]; // check before also
            prev--;
        }
        arr[prev + 1] = curr; // replacing the value
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
    int arr[] = {1, 4, 3, 5, 2};
    insertion(arr, n);
    printarr(arr, n);
}