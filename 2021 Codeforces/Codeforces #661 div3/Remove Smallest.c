#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

int arr[SIZE + 1];
char result[1001][4];
int count = 0;
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

	for (int i = 0; i < count; i++)
	{
		printf("%s", result[i]);
		if (i != count - 1)
			printf("\n");
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

	while (cnt != SIZE+1)
	{
		if (arr[cnt] > 1)
		{
			arr[cnt]--;
		}
		else if (arr[cnt] != 0 && arr[cnt + 1] != 0)
		{
			arr[cnt]--;
		}
		else if (arr[cnt] < 2)
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
			strcpy(result[count],"NO");
			count++;
			return;
		}
	}
	strcpy(result[count], "YES");
	count++;
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