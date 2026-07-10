#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age:";
    cin >> age;
    if (age >= 18)
    {
        cout << "CAN VOTE" << endl;
    }
    else
    {
        cout << "CANNOT VOTE" << endl;
    }
    return 0;
}