#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 0, -1, 2, 0, -2};
    int n = nums.size();
    int tar = 0;
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == tar)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (auto quad : ans)
    {
        for (int x : quad)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}