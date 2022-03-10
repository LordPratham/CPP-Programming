#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int savings;
    cin >> savings;

    if (savings > 7000)
    {
        cout << "Option A";
    }
    else
    {
        cout << "Option B";
    }

    return 0;
}