#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, ans = 2, curr = 2, j = 2;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0];

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
            // cout << pd;
        }
        else
        {
            curr = 2;
            pd = arr[j] - arr[j - 1];
        }
        ans = ans > curr ? ans : curr;
        j++;
    }
    cout << ans;

    return 0;
}
