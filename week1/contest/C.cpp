#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= 'a' && x <= 'y')
    {
        x += 1;
    }
    else
        x -= 25;

    cout << char(x);

    return 0;
}