#include <iostream>
using namespace std;
int main()
{
    int sz = 5;
    int arr[5] = {1, 2, 2, 1, 1};

    for (int i = 0; i < sz; i++)
    {
        int freq = 0;
        for (int j = 0; j < sz; j++)
        {
            if (arr[j] == arr[i])
            {
                freq++;
            }
        }

        if (freq > sz / 2)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}