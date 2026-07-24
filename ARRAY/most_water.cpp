#include <iostream>
using namespace std;
int water(int arr[], int sz)
{
    int width, height, store;
    int content = 0; // initialize it 0
    for (int i = 0; i < sz; i++)
    { // left boundry of the container
        for (int j = i + 1; j < sz; j++)
        {                                 // right boundry of the container
            width = j - i;                // finding out base(width )of the container by subtracting the right and left indeces
            height = min(arr[i], arr[j]); // finding out height , height is the min of from the both boundry
            int store = width * height;   // area= width*height
            content = max(content, store);
        }
    }
    return content;
}
int main()
{
    int sz = 9;
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_water = water(arr, sz);
    cout << max_water << endl;
}