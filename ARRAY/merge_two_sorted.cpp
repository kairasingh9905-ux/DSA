#include <iostream>
using namespace std;
void merging(int a[], int b[], int m, int n)
{
    int i = m - 1, j = n - 1, indx = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[indx] = a[i];
            i--;
            indx--;
        }
        else
        {
            a[indx] = b[j];
            j--;
            indx--;
        }
    }
}
void printarr(int a[], int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int m = 3, n = 3;
    int a[6] = {1, 2, 3};
    int b[3] = {2, 5, 6};
    merging(a, b, m, n);
    printarr(a, m + n);
}