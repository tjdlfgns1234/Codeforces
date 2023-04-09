#include <bits/stdc++.h>
#include <unordered_map>
#define all(a) a.begin(),a.end()

// beware of min & max value;
// 빈 곳의 개수를 세는 것도 그래프를 잘 푸는 방법중 하나!
// /와 %연산은 배열을 나타낼때 유용하게 쓰인다.
// 우선순위 큐에 무엇을 넣을지도 잘 생각하자.
// 큐 쓰는 것도 좋았지만, 최적화는 잘해주자.
// 행렬을 배열로도 쓸 생각하자

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

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
        int n, k;
        cin >> n >> k;

        vector<vector<int>> arr(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        int ans = 0;
        if (n & 1) { // 홀수 일때
            int mid = n / 2; // 가운데 연산을 다르게

            for(int i = 0; i < n/2;i++)
                for (int j = 0; j < n; j++)
                    if (arr[i][j] != arr[n-1-i][n - 1 - j])
                        ans++;



            for (int i = 0; i < n/2+1; i++)
                if (arr[mid][i] != arr[mid][n - i - 1])
                    ans++;
        }
        else { // 짝수 일때
            int d = n / 2;
            for (int i = 0; i < n / 2; i++)
                for (int j = 0; j < n; j++)
                    if (arr[i][j] != arr[n -1 -i][n-1-j])
                        ans++;
        }

        if (ans < k)
            if ((k - ans) & 1) {
                if (n & 1)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "YES\n";
        else if (ans == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
