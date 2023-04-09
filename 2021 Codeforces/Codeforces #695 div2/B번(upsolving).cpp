#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[300000] = { 0 };

int isValley(int i,int n)
{
	return i>0 && i < n-1 && arr[i] > arr[i + 1] && arr[i] > arr[i - 1];
}
int isHill(int i,int n)
{
	return  i > 0 && i < n - 1 && arr[i] < arr[i + 1] && arr[i] < arr[i - 1];
}

int main(void)
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL), cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll s = 0;
		ll now = 0;
		bool* chk = new bool[n];
		bool chk2 = false;
		for (int i = 0; i < n; i++)
			cin >> arr[i], chk[i] = false;

		for (int i = 1; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
				chk[i] = true, s++;
			else if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
				chk[i] = true, s++;
		}
		ll ans = s;
		for (int i = 1; i < n - 1; i++)
		{
			ll tmp = arr[i];
			arr[i] = arr[i - 1];
			ans = min(ans, s - chk[i-1] - chk[i] - chk[i+1]+isHill(i-1,n)+isValley(i - 1,n) + isHill(i,n) + isValley(i,n) + isHill(i + 1,n) + isValley(i + 1,n));
			arr[i] = arr[i + 1];
			ans = min(ans, s - chk[i - 1] - chk[i] - chk[i + 1] + isHill(i - 1, n) + isValley(i - 1, n) + isHill(i, n) + isValley(i, n) + isHill(i + 1, n) + isValley(i + 1, n));
			arr[i] = tmp;
		}

		cout << ans << '\n';

	}

	return 0;
}