#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
    
	int i, j, m, n;
	
	for (i = 0; i < a; ++i) {
		scanf("%d", &j);
		if (j < m) m = j;
		if (j > n) n = j;
	         
	}
	printf("%d %d", m, n);

	return 0;
}
