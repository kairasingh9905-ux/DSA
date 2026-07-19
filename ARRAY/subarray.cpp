#include <iostream>
using namespace std;
int main()
{
    int sz = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int start = 0; start < sz; start++)

    {
        cout << "[";
        for (int end = start; end < sz; end++)
        {

            cout << arr[end] << " ";
            ;
        }
        cout << "]" << endl;
    }
}