#include <iostream>
#include <vector>
using namespace std;
void sorting(vector<int> &arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int indx = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[indx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[indx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[indx++] = 2;
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
    vector<int> arr = {0, 2, 1, 1, 0, 2, 0, 1, 0};
    int n = arr.size();
    sorting(arr, n);
    printarr(arr, n);
}