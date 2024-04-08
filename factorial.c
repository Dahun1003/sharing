#include <stdio.h>

int main(void){
    
	int a, b, c;
    scanf("%d", &a);
	
	c = a;
     if (a != 0){
	for(b = 1; b<a; b++)
	{
        c *= b;
    } 
	}else{ 
	c = 1;
	}
    
        printf("%d\n", c);
		
		return 0;
}
