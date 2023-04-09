#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void find_sum();

int main(void)
{
	int t;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		find_sum();
	}

}
void find_sum()
{
	int a[3], b[3];
	int sum = 0;
	scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);

	if (a[2] >= b[1])
	{
		sum += b[1] * 2;
		a[2] -= b[1];
		b[1] = 0;
		if (b[2] >= a[2] )
		{
			b[2] -= a[2];
			a[2] = 0;
			if (a[0] >= b[2])
			{
				printf("%d\n", sum);
				return;
			}
			else
			{
				b[2] -= a[0];
				sum -= b[2] * a[1] * 2;
				printf("%d\n", sum);
				return;
			}
		}
		else
		{
			a[2] -= b[2];
			b[2] = 0;
			if (a[0] >= b[2])
			{
				printf("%d\n", sum);
				return;
			}
			else
			{
				b[2] -= a[0];
				sum -= b[2] * a[1] * 2;
				printf("%d\n", sum);
				return;
			}
		}

	}
	else
	{
		sum += a[2] * 2;
		b[1] -= a[2];
		a[2] = 0;
		
		if (b[2] >= a[2])
		{
			b[2] -= a[2];
			a[2] = 0;
			if (a[0] >= b[2])
			{
				printf("%d\n", sum);
				return;
			}
			else
			{
				b[2] -= a[0];
				sum -= b[2] * a[1] * 2;
				printf("%d\n", sum);
				return;
			}
		}
		else
		{
			a[2] -= b[2];
			b[2] = 0;
			if (a[0] >= b[2])
			{
				printf("%d\n", sum);
				return;
			}
			else
			{
				b[2] -= a[0];
				sum -= b[2] * a[1] * 2;
				printf("%d\n", sum);
				return;
			}
		}
	}
}