#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    long int sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            // cout << j << " " << endl;
            sum += arr[j];
            cout << sum << " ";
        }
    }
    // for (int k = n - 1; k >= 0; k--)
    // {

    //     for (int i = k; i >= 0; i--)
    //     {
    //         for (int j = ; j <= ; j++)
    //         {
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
