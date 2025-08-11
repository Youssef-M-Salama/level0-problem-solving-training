#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        int cnt = 0;
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }
        ans = max(cnt, ans);
    }
    cout << ans;

    return 0;
}