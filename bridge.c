#include<stdio.h>

int main(void)
{
	int T, i, j, n, r, total = 1;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &n, &r);
		for (j = 0; j < n; j++)
		{
			total = total * (r - j);
			total = total / (1 + j);
		}
		printf("%d\n", total);
		total = 1;
	}

	return 0;
}
