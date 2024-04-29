#include <stdio.h>
#include <stdlib.h>

int quick(const void* ex1, const void* ex2) {
	if (*(int*)ex1 < *(int*)ex2)
		return -1;
	else if (*(int*)ex1 == *(int*)ex2)
		return 0;
	else
		return 1;
}

int main(void)
{
	int a, i;
	long long total = 0;
	long long* arr;
	scanf("%d", &a);
	arr = (long long*)malloc(sizeof(long long) * a);

	for (i = 0; i < a; i++) {
		scanf("%lld", &arr[i]);
	}

	qsort(arr, a, sizeof(long long), quick);

	for (i = 0; i < a; i++)
		printf("%lld\n", arr[i]);


	return 0;
}
