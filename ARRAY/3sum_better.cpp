#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    set<vector<int>> st;
    for (int i = 0; i < arr.size(); i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < arr.size(); j++)
        {
            int tar = -(arr[i] + arr[j]);
            if (hashset.find(tar) != hashset.end())
            {
                vector<int> temp = {arr[i], arr[j], tar};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (auto &trip : ans)
    {
        for (int x : trip)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}