#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 6, 8, 11};
    int tar = 15;
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int need = tar - nums[i];
        if (seen.count(need))
        {
            cout << "Pair found" << endl;
            cout << seen[need] << " " << i << endl;
            return 0;
        }
        seen[nums[i]] = i;
    }
    cout << "no pair found" << endl;
    return 0;
}