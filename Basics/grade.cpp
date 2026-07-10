#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter Marks";
    cin >> m;
    if (m >= 90)
    {
        cout << "GRADE A" << endl;
    }
    else if (m < 90 && m >= 80)
    {
        cout << "GRADE B" << endl;
    }
    else if (m < 80 && m >= 70)
    {
        cout << "GRADE C" << endl;
    }
    else
    {
        cout << "FAIl" << endl;
    }
    return 0;
}