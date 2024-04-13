/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, i = 0, j = 0, temp = 0, total = 0;
    int* arr;
    arr = (int*)malloc(sizeof(int) * a);
    
    scanf("%d", &a);
    
	for (i = 0; i < a; i++){
    scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < a; i++){
		for (j = 0; j < a; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
    for (i = 0; i < a; i++){
		if (arr[i] - i >= 0) {
			total += (arr[i] - i);
		    }
		else {
			arr[i] = 0;
			total += arr[i];
	        } 
		}
    
	printf("%d", total);
    
    return 0;
} */
//시간초과

#include <stdio.h>
#include <stdlib.h>

int quick(const void* ex1, const void* ex2){
	if (*(int*)ex1 > *(int*)ex2) 
	return -1;
	else if(*(int*)ex1 == *(int*)ex2)
	return 0;
	else
	return 1;
}

int main(void)
{
    int a, i;
    long total = 0;
    long* arr;
    scanf("%d", &a);
    arr = (long*)malloc(sizeof(long) * a);
    
	for (i = 0; i < a; i++){
    scanf("%d", &arr[i]);
	}
	
	qsort(arr, a, sizeof(long), quick);
	
    for (i = 0; i < a; i++){
		if (arr[i] - i >= 0) {
			total += (arr[i] - i);
		    }
		else {
			break;
	        } 
		}
    
	printf("%d", total);
	
    
    return 0;
}






