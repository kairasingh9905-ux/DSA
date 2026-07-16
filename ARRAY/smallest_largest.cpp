#include <iostream>
using namespace std;
int main()
{
    int num[5] = {12, 4, 56, 43, 14};
    int smallest = INT_MAX;
    int sz = sizeof(num) / sizeof(int);
    for (int i = 0; i <= (sz - 1); i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "SMALLEST NUMBER = " << smallest << endl;
    int largest = INT_MIN;
    for (int i = 0; i <= (sz - 1); i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "LARGEST NUMBER: " << largest << endl;
}