#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define ull unsigned long long
#define mod 1000000007ll
#define INF 100000007
#define SIZE 9
#define all(a) a.begin(),a.end()

// beware of min & max value;
// 빈 곳의 개수를 세는 것도 그래프를 잘 푸는 방법중 하나!
// /와 %연산은 배열을 나타낼때 유용하게 쓰인다.
// 우선순위 큐에 무엇을 넣을지도 잘 생각하자.
// 큐 쓰는 것도 좋았지만, 최적화는 잘해주자.
// 배열을 행렬로 변환하는 생각을 하자.

using namespace std;
void solve();

int main()
{
    ios::sync_with_stdio(NULL);
    std::cout.tie(NULL), cin.tie(NULL);

    solve();

    return 0;
}
void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(n));

        int l = 1;
        int r = n * n;
        if (n & 1) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i+j) & 1)
                        arr[i][j] = l++;
                    else
                        arr[i][j] = r--;
                }
                if (i & 1)
                    reverse(all(arr[i]));
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j& 1)
                        arr[i][j] = l++;
                    else
                        arr[i][j] = r--;
                }
                if (i & 1)
                    reverse(all(arr[i]));
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }
}
