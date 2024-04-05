#include <stdio.h>

int main() {
	int a, i, j, m = 1000001, n = -1000001;
	scanf("%d", &a);
	
	for (i = 0; i < a; ++i) {
		scanf("%d", &j);
		if (j < m) m = j;
		if (j > n) n = j;
	         
	}
	printf("%d %d", m, n);

	return 0;
}
