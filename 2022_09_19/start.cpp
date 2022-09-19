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
	
	while (num < 0) {
		printf("\n이건 음수입니다.\n다시 입력해주세요.\n");
		printf("양수입력: ");
		scanf("%d", &num);
	}
	
	return num;
}

// 반환 값: 양수 num값  
