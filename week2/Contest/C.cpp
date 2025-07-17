#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int minn = INT32_MAX;
    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;
        minn = min(minn, val);
        if (i % k == 0)
        {
            cout << minn<<" ";
            minn = INT32_MAX;
        }
    }
    if (minn != INT32_MAX)
    {
        cout << minn;
    }
    return 0;
}