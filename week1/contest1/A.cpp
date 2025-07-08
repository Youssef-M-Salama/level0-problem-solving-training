#include <bits/stdc++.h>
using namespace std;

#define speed                    \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

int main()
{
    speed;
    int x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2);
    double Answer = p / (1.0 - (x / 100.0));
    cout << Answer;

    return 0;
}