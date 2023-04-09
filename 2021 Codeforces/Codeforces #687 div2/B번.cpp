#include <iostream>
#include <algorithm>
#define SIZE 100
using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    int n, k;
    bool color[SIZE + 1] = { false };
    int Max = -1;

    while (t--)
    {
        cin >> n >> k;
        int result = 987654321;
        int* house = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> house[i], color[house[i]] = true;
        }
        for (int j = 1; j < SIZE + 1; j++)
        {
            int ans = 0;
            if (color[j])
            {
                for (int i = 0; i < n; i++)
                {
                    if (j != house[i])
                        ans++, i += k - 1;
                    if (ans >= result)
                        break;
                }
                result = min(ans, result);
            }
        }
        cout << result << "\n";
        for (int j = 1; j < SIZE + 1; j++)
            color[j] = false;
    }
    return 0;
}