#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long L, R;
        L = min(l, r);
        R = max(l, r);
        L--;
        long long sumFromOneToL = L * (L + 1) / 2;
        long long sumFromOneToR = R * (R + 1) / 2;
        cout << sumFromOneToR - sumFromOneToL << " \n";
    }
    return 0;
}