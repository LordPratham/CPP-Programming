#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, s;
    cin >> n;
    cin >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0, st, en, sum = 0;

    while (sum + arr[j] <= s && j < n)
    {
        sum += arr[j];
        j++;
    }

    return 0;
}
