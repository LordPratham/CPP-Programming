#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int j = 0; j < n; j++)
    {
        if ((arr[j] >= max) && (arr[j] > arr[j + 1]) && (j != (n - 1)))
        {
            cout << " Day " << j + 1;
        }
        else if ((j == n - 1) && (arr[j] >= max))
        {
            cout << "Last Day";
        }
        max = max > arr[j] ? max : arr[j];
    }

    return 0;
}
