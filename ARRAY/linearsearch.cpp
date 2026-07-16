#include <iostream>
using namespace std;
int linearsearch(int arr[], int sz)
{
    int target = 8;
    for (int i = 0; i <= (sz - 1); i++)
    {
        if (arr[i] == target)
        {

            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = sizeof(arr) / sizeof(int);
    cout << linearsearch(arr, sz) << endl;
}