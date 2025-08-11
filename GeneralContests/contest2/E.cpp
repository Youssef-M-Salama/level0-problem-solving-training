#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if (n < t)
    {
        cout << "Failed :(";
    }
    else
    {
        cout << "Passed :)";
    }

    return 0;
}