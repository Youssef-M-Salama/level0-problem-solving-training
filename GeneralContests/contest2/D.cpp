#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cout << "is lower" << "\n";
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << "is upper" << "\n";
        }
        else
        {
            cout << "is digit" << "\n";
        }
    }

    return 0;
}