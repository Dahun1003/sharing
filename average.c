#include <stdio.h>

int main() {
	int num1, i, j;
	scanf("%d", &num1);
	
	double arr[1000];

	double max = 0, total = 0;
	
	for (i = 0; i < num1; i++) {
		scanf("%lf", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}

	for (j = 0; j < num1; j++) {
		arr[j] = (arr[j] / max) * 100;
		total += arr[j];
	}

	printf("%lf", total/num1);
	
	return 0;
}
