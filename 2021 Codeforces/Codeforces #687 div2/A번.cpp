#include <iostream>
#include <algorithm>

using namespace std;
int ab(int a);

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    int n, m, r, c;
    while (t--)
    {
        cin >> n >> m >> r >> c;
        cout << max(ab(n - r), ab(r - 1)) + max(ab(m - c), ab(c - 1)) << "\n";
    }


    return 0;
}
int ab(int a)
{
    if (a < 0)
        return -a;
    else
        return a;
}