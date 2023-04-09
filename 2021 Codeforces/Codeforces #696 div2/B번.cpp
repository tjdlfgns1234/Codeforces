#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool chkp(ll a);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		ll d;
		cin >> d;
		ll a = 1 + d;
		while (1)
		{
			if (chkp(a))
				break;
			else
				a++;
		}
		ll b = a+d;
		while (1)
		{
			if (chkp(b))
				break;
			else
				b++;
		}
		cout << a * b << '\n';
	}

	return 0;
}
bool chkp(ll a)
{
	if (a == 1)
		return true;
	else if (a == 2)
		return true;
	else if (a % 2 == 0)
		return false;
	for (ll i = 3; i * i <= a; i += 2)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}