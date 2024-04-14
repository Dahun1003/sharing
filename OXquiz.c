#include <stdio.h>
#include <string.h>

int main(void) {
	int a, total, score, i, j;
	char s[79];

	scanf("%d", &a);
	
	for (i = 0; i < a; i++) {
		scanf("%s", s);

		for (j = 0; j < strlen(s); j++) {
			if (s[j] == 'O' && s[j + 1] == 'X') {
				total += score;
				score = 1;
			}
			else if (s[j] == 'O' && s[j + 1] != 'X') {
				total += score;
				score += 1;
			}
		}
		printf("%d\n", total);
		total = 0;
		score = 1;
	}
	return 0;
}
