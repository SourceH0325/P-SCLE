#include <stdio.h>

int get_num (void);

int main (void) {
	
	int result;
	result = get_num();
	
	printf("반환 값: %d", result);
	
	return 0; 
}

int get_num (void) {
	
	int num;
	
	printf("양수입력: ");
	scanf("%d", &num);
	
	return num;
}

// 반환 값: num값  
