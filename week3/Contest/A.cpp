#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        if (w == h)
        {
            cout << "Square";
        }
        else
        {
            cout << "Rectangle";
        }
        cout << "\n";
    }

    return 0;
}
