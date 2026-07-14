#include <iostream>
using namespace std;
int binomial_coeff(int n, int r)
{
    int n_val = 1;
    int r_val = 1;
    int nr_val = 1;
    for (int i = 1; i <= n; i++)
    {
        n_val = n_val * i;
    }
    int fac_n = n_val;
    for (int i = 1; i <= r; i++)
    {
        r_val = r_val * i;
    }
    int fac_r = r_val;
    for (int i = 1; i <= (n - r); i++)
    {
        nr_val *= i;
    }
    int fac_nr = nr_val;
    int coeff = (fac_n) / (fac_r * fac_nr);
    return coeff;
}
int main()
{
    int n, r;
    cout << "enter value of n:";
    cin >> n;
    cout << "enter value of r:";
    cin >> r;
    cout << "BINOMIAL COEFFICIANT= " << binomial_coeff(n, r) << endl;
}