#include <iostream>
using namespace std;
int main()
{
    int sz = 4;
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}