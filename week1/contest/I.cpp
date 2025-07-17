#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int last = a % 10;
    int first = a / 10;

    if (last % first == 0 || first % last == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
