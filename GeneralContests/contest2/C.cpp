#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int firstScore, studentScore;
        cin >> firstScore;
        int ans = firstScore;
        for (int i = 2; i <= n; ++i)
        {
            cin >> studentScore;
            ans += studentScore;
        }
        cout << min(ans, m) << "\n";
    }
    return 0;
}