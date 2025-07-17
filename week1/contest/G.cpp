#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;

    // Step 1: Use the combo (1 eye + 1 mouth + 1 body)
    ll type3 = min({eyes, mouths, bodies});
    eyes -= type3;
    mouths -= type3;
    bodies -= type3;

    // Step 2: Use the combo (2 eyes + 1 body) with remaining eyes and bodies
    ll type1 = min(eyes / 2, bodies);

    // Total Katryoshkas formed
    cout << type3 + type1 << "\n";

    return 0;
}
