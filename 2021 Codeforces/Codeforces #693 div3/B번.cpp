#include <bits/stdc++.h>

using namespace std;

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
		int tmp;
		int one=0, two=0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			if (tmp == 1)
				one++;
			else
				two++;
			sum += tmp;
		}
		if (sum % 2 == 1)
			cout << "NO" << '\n';
		else
		{
			if (two % 2 == 0)
				cout << "YES" << '\n';
			else  // two is odd
			{
				one = one / 2;
				if(one >= 1)
					cout << "YES" << '\n';
				else
					cout << "NO" << '\n';
			}
		}
	}


	return 0;
}