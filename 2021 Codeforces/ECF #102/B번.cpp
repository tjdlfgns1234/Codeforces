#include <bits/stdc++.h>
#define ll long long

using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int size1 = s1.size();
		int size2 = s2.size();
		int LCM = lcm(size1, size2);

		int x = LCM / size1, y = LCM / size2;
		string s3, s4;
		bool chk = false;
		for (int i = 0; i < x; i++)
			s3 = s3 + s1;

		for (int i = 0; i < y; i++)
			s4 = s4 + s2;

		if (s3 == s4)
			cout << s3 << '\n';
		else
			cout << -1 << '\n';
	}
	return 0;
}
int gcd(int a, int b)
{
	int tmp = a, tmp2 = b;
	while (tmp2 != 0)
	{
		int r = tmp % tmp2;
		tmp = tmp2;
		tmp2 = r;
	}
	return tmp;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}