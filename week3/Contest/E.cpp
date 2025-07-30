#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int cnt1 = 0; // For pattern starting with +
    int cnt2 = 0; // For pattern starting with -

    for (int i = 0; i < n; ++i)
    {
        if ((i % 2 == 0 && arr[i] < 0) || (i % 2 == 1 && arr[i] > 0))
            cnt1++;
        if ((i % 2 == 0 && arr[i] > 0) || (i % 2 == 1 && arr[i] < 0))
            cnt2++;
    }

    cout << min(cnt1, cnt2) << endl;

    return 0;
}