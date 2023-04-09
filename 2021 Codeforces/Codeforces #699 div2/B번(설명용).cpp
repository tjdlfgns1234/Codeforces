#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

// 1과 범위 마지막 값등 간단한 경우에 대해 처리를 반드시 해주자.

/*
	tag : brute force, greedy, implementation
	k가 10억이라는 조건이 대회 때 상당히 부담을 줌.
	모든 테스트 케이스의 n의 합이 100을 넘지 않는다는 조건을 보면
	brute force로 풀어도 시간초과가 발생하지 않는 다는 사실을 알 수 있음.

	에디토리얼에도 brute force로 구현했음.
 */

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector <int> h(n);
		for (auto& i : h)
			cin >> i;
		int ans = -1;
		int pre = -1;
		if (k > 10000)   // why? n은 최대 100개이고  1<= h <= 100 이기 때문이다.
			cout << -1 << '\n';
		else
		{
			int i;
			for (int j = 1; j < k + 1; j++) // k번째 볼러까지 시뮬레이션
			{
				for (i = 1; i < n; i++)
				{
					if (h[i - 1] >= h[i]) // 계속 돌을 굴림.
						continue;
					else if (h[i - 1] < h[i]) // 막혔을 때
					{
						h[i - 1]++;  // 그 산의 높이가 증가함.
						break;
					}
				}
				if (i == n)  // 이미 산이 평평하여 돌이 끝에서 떨어지면 -1 출력
				{
					ans = -1;
					break;
				}
				if (j == k)
					pre = i; // k번까지 굴렸으면 k번째 볼러의 위치을 저장
			}
			if (pre != -1)
				cout << pre << '\n';
			else
				cout << ans << '\n';
		}
	}

	return 0;
}