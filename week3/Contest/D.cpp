#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool exist[1002] = {false};
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        exist[arr[i]] = true;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int value = arr[i] + 1;
        if (exist[value])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

//-- Bad solution --
// int main()
// {
//     int arr[1000];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     int cnt = 0;
//     for (int i = 0; i < n; ++i) {
//         int value = arr[i] + 1;
//         for (int j = 0; j < n; ++j) {
//             if (value == arr[j]) {
//                 cnt++;
//                 break;
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }