#include <stdio.h>

int main(void) { int a, i, j, m = 1000001, n = -1000001; scanf("%d", &a);

for (i = 1; i <= a; i++) {
            scanf("%d", &j);
              if (j < m) {
                m = j;
	 }else if(j > n){
                n = j;
         }
  }

printf("%d %d", m, n);
     return 0;
}
