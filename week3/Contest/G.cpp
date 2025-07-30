#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        int evens = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
            {
                evens++;
            }
        }
        if (n % 2 != 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << abs(evens - (n / 2)) << "\n";
        }
    }
    return 0;
}