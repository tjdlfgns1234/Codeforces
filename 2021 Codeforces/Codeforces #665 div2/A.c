#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void result();

int main(void)
{
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		result();
	}

	return 0;
}
void result()
{
	int n, k;
	int count = 0;
	int dis = -1;
	int b = 0;
	scanf("%d %d", &n, &k);

	if (k <=n)
	{
		printf("%d\n", (n - k) % 2);
	}
	else
	{
		printf("%d\n", (k-n));
	}
}