#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, -1, 2, 1, 4, -2};
    sort(arr.begin(), arr.end());
    set<vector<int>> st;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (auto &triplet : ans)
    {
        for (int x : triplet)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
