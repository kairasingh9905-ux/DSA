#include <iostream>
using namespace std;
int most_water(int ht[], int sz)
{
    int height, width, store;
    int content = 0;
    int lp = 0, rp = sz - 1;
    while (lp < rp)
    {
        width = rp - lp;
        height = min(ht[rp], ht[lp]);
        store = width * height;
        content = max(content, store);
        if (ht[lp] < ht[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    return content;
}
int main()
{
    int sz = 9;
    int ht[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "MOST WATER IN THE CONTAINER : " << most_water(ht, sz) << endl;
}