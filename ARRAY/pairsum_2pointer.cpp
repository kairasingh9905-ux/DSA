#include <iostream>
using namespace std;
int main()
{
    int sz = 4;
    int arr[4] = {2, 7, 11, 15};
    int i = 0;
    int j = sz - 1;
    int target = 22;
    int ps = 0;
    while (i < j)
    {
        ps = arr[i] + arr[j];
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
}