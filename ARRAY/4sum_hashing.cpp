#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-1, 0, 1, -2, 0, 2};
    int n = nums.size();

    set<vector<int>> st; // set define
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            set<int> hashset; // hashset defined
            for (int k = j + 1; k < n; k++)
            {
                int tar = -(nums[i] + nums[j] + nums[k]);
                if (hashset.find(tar) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], tar};
                    sort(temp.begin(), temp.end());
                    st.insert(temp); // inserting value in set
                }
                hashset.insert(nums[k]); // inserting value in hashmap
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (auto &quad : ans)
    {
        for (int x : quad)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}