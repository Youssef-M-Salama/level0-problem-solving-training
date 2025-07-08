#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, ans;
    cin >> a >> b;

    // Works because bitwise XOR mimics bitwise addition without carry, just like Peter Parker’s mistake.
    ans = a ^ b;
    cout << ans;

    return 0;
}