#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 21)
    {
        cout << "N is 22 or more";
    }
    else if (n < 21)
    {
        cout << "N is 21 or less";
    }
    else
    {
        cout << "It can be any thing - it is 21";
    }
}