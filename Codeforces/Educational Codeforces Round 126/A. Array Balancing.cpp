#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;

using namespace std;

/*  Edu 126 A번 Array Balancing
    
    A번 치고 증명이 빡센던 문제

    현재 단계에서 swap한 값이 더 작으면 swap
    아니면 swap하지 않는다.

    swap을 하더라도 뒤의 값을 모조리 swap하면 결국 같이 같아지므로
    swap을 하더라도 뒤의 값에 영향을 미치지 않는다.
    pair(p-1,p)의 기여도가 낮아지므로 성립한다.

    이런 유형의 문제는 제일 작은 문제 단위부터 생각하자.
    밑에 코드는 O(n)이고, O(n^2)로도 풀 수 있음.

    tag :  greedy, math, *800
*/


void solve();

int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL), cin.tie(NULL);

    solve();

    return 0;
}
void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector <ll> a(n), b(n);

        for (auto& i : a)
            cin >> i;
        for (auto& i : b)
            cin >> i;

        for (int i = 1; i < n; i++) {
            ll x = abs(a[i - 1] - a[i]) + abs(b[i - 1] - b[i]);
            ll y = abs(a[i - 1] - b[i]) + abs(b[i - 1] - a[i]);

            if (x > y) 
                swap(a[i], b[i]);
        }

        ll sum = 0;

        for (int i = 1; i < n; i++) {
            sum += abs(a[i - 1] - a[i]);
            sum += abs(b[i - 1] - b[i]);
        }
        cout << sum << '\n';
    }
}