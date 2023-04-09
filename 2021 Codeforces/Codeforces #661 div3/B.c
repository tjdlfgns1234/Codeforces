#include<stdio.h>
#include<stdlib.h>

void move(int n);

int main(void)
{
	int t;
	int n;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		move(n);
	}

	return 0;
}
void move(int n)
{
	long long tmp;
	long long* a = (long long*)malloc(sizeof(long long) * n);
	long long* b = (long long*)malloc(sizeof(long long) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &b[i]);
	}


}