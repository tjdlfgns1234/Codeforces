#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int arr[SIZE + 1];
void Remove_s(int n);
void arr_ini();

int main(void)
{
	int t;
	int n;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		Remove_s(n);
	}

	return 0;
}
void Remove_s(int n)
{
	int tmp;
	int cnt = 1;
	int check = 0;


	arr_ini();
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		arr[tmp]++;
	}

	if (n == 1)
	{
		printf("YES\n");
		return;
	}

	while (cnt!=SIZE+1)
	{
		if (arr[cnt] > 1)
		{
			arr[cnt]--;
		}
		else if (arr[cnt] <= arr[cnt + 1]&&arr[cnt]!=0&&arr[cnt+1]!=0)
		{
			arr[cnt]--;
		}
		if (arr[cnt] < 2)
		{
			cnt++;
		}
	}


	for (int i = 1; i < SIZE + 1; i++)
	{
		if (arr[i] != 0)
		{
			check++;
		}

		if (check == 2)
		{
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
	return;
}
void arr_ini()
{
	for (int i = 0; i < SIZE + 1; i++)
	{
		arr[i] = 0;
	}
	return;
}