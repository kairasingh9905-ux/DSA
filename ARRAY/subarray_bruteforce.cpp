#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    int max_sum = INT_MIN;

    for (int start = 0; start < sz; start++)
    {
        int currsum = 0;
        for (int end = start; end < sz; end++)
        {

            currsum += arr[end];
            max_sum = max(currsum, max_sum);
        }
    }

    cout << "MAXIMUM SUM OF SUBARRAY= " << max_sum << endl;
    return 0;
}
