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
		priority_queue <int,vector<int>, less<int>> even;
		priority_queue <int, vector<int>, less<int>> odd;
		long long alice =0, bob=0;
		int tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			if (tmp % 2 == 1)
				odd.push(tmp);
			else
				even.push(tmp);
		}

		while (1)
		{
			if (!even.empty() && !odd.empty())
			{
				// alice turn
				if (even.top() >= odd.top())
					alice += even.top(), even.pop();
				else
					odd.pop();

				// bob turn 
				if (!even.empty() && !odd.empty())
				{
					if (odd.top() >= even.top())
						bob += odd.top(), odd.pop();
					else
						even.pop();
				}
				else if (!odd.empty())
				{
					bob += odd.top(),odd.pop();
				}
				else if (!even.empty())
				{
					even.pop();
				}
			}
			else if (!even.empty())
			{
				alice += even.top(), even.pop();
				if (!even.empty())
				{
					even.pop();
				}
			}
			else if (!odd.empty())
			{
				odd.pop();
				if (!odd.empty())
				{
					bob += odd.top(), odd.pop();
				}
			}
			else
				break;
		}
		if (alice > bob)
			cout << "Alice" << '\n';
		else if (alice == bob)
			cout << "Tie" << '\n';
		else
			cout << "Bob" << '\n';
	}

	return 0;
}