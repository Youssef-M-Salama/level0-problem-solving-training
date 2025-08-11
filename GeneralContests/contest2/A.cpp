#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int L, R, cnt = 0;
    cin >> L >> R;
    for (int i = L; i <= R; ++i)
    {
        int number = i, revNumber=0;
        while (number)
        {
            revNumber = revNumber * 10 + number % 10;
            number /= 10;
        }
        cnt += (i == revNumber);
    }
    cout << cnt;

    return 0;
}