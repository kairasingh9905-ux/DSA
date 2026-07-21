#include <iostream>
using namespace std;
int main()
{
    int sz = 5;
    int arr[5] = {5, 3, 6, 6, 6};
    sort(arr, arr + sz); // sorting array is ascending order
    for (int i = 0; i < sz; i++)
    {
        int freq = 1;
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[j] == arr[i])
            {
                freq++;
            }
        }
        if (freq > sz / 2) // majority element exists more than sz/2 times in an array
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}