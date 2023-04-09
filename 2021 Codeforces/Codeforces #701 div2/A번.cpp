#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(a) a.begin(),a.end()
using namespace std;

// Beware of MAX & MIN value!
// Beware of floating point Error

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int ans = 1e10;
		if (a == b)
			cout << 2 << '\n';
		else if (a < b)
			cout << 1 << '\n';
		else if (a > b)
		{
			int idx = 0;
			while (1)
			{
				int a2 = a, b2 = b;
				int tmp = 0;
				if (b2 == 1)
					tmp++, b2++;
				tmp += idx;
				b2 += idx;
				while (1)
				{
					if (a2 < b2)
					{
						tmp++;
						break;
					}
					else if (a2 == b2)
					{
						tmp += 2;
						break;
					}
					a2 = floor((double)a2 / b2);
					tmp++;
				}
				ans = min(ans, tmp);
				idx++;
				if (idx == 50)
					break;
			}
			cout << ans << '\n';
		}
		
	}

	return 0;
}