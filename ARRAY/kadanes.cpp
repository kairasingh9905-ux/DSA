#include <iostream>
using namespace std;
int main()
{
    int sz = 7;
    int arr[7] = {3, -4, 5, 7, -1, 7, -8};
    int maxSum = INT_MIN;
    for (int start = 0; start < sz; start++)
    {
        int currSum = 0;
        for (int end = start; end < sz; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
    }
    cout << "MAXIMUM SUM OF SUBARRAY: " << maxSum << endl;
    return 0;
}
