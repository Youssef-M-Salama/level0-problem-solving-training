#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            int j = 0;
            while (j < i / 2)
            {
                swap(arr[j], arr[i - 1 - j]);
                ++j;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
