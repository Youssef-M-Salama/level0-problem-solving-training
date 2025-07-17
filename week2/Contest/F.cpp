#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = 0;
    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;
        long long x;
        cin >> x;
        while (x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }
        maxx = max(cnt, maxx);
    }
    cout << maxx;
    return 0;
}