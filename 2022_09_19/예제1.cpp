#include <stdio.h>

int get_num (void);

int main (void) {

	int result;
	result = get_num();
	
	printf("입력한 값 : %d\n", result);
	
	return 0; 
}

int get_num (void) {
	
	int num;
	
	printf("값을 입력해주세요 : ");
	scanf("%d", &num);
	
	return num;
}

// 값을 입력해주세요 : 4000
// 입력한 값 : 4000
