#include <iostream>
using namespace std;
int main()
{
    int sz = 6;
    int arr[6] = {2, 2, 4, 7, 7, 7};

    for (int i = 0; i < sz; i++)
    {
        int freq = 1;
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        if (freq >= sz / 2)
        {
            cout << arr[i] << endl;
            break;
        }
    }
    return 0;
}