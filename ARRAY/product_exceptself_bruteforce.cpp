#include <iostream>
using namespace std;
void product(int nums[], int ans[], int sz)
{

    for (int i = 0; i < sz; i++)
    {
        int product = 1;
        for (int j = 0; j < sz; j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
        }
        ans[i] = product;
    }
}
int main()
{
    int sz = 4;
    int nums[] = {1, 2, 3, 4};
    int ans[4];
    product(nums, ans, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}