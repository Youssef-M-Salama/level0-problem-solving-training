#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, k, a;
    cin >> n >> k >> a;

    double result = (n * k) / a;
    long long intPart = (n * k) / a; // integer part

    if (result - intPart > 0) {
        cout << "double";
    }
    else if (result <= 2147483647) {
        cout << "int";
    }
    else {
        cout << "long long";
    }

    return 0;
}
