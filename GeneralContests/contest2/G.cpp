#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    cout << n - (n % m);
    return 0;
}