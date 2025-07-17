#include <iostream>
using namespace std;

int main()
{
    long long id;
    cin >> id;
    long long row = id / 4;
    long long column = id % 4;
    bool isOdd = row % 2 != 0;
    if (isOdd)
    {
        column = 3 - column;
    }
    cout << row << " " << column;
    return 0;
}