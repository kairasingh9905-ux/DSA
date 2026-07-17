#include <iostream>
using namespace std;
int intersection(int arr1[], int arr2[], int sz1, int sz2)
{
    int ans = 0;

    for (int i = 0; i < sz1; i++)

    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans = arr1[i];
            }
        }
    }
    return ans;
}
int main()
{
    int sz1, sz2;
    cout << "enter size of 1st array :";
    cin >> sz1;
    cout << "enter size of 2nd array:";
    cin >> sz2;
    int arr1[1000];
    cout << "enter numbers of 1st array :";
    for (int i = 0; i < sz1; i++)
    {
        cin >> arr1[i];
    }
    int arr2[1000];
    cout << "enter numbers of 2nd array:";
    for (int i = 0; i < sz2; i++)
    {
        cin >> arr2[i];
    }
    cout << "INTERSECTION POINT=" << intersection(arr1, arr2, sz1, sz2) << endl;
}
