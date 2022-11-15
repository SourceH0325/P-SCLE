#include <stdio.h>

int get_num (void);

int main (void) {
	
	int result;
	result = get_num();
	
	printf("입력 값 : %d\n", result);
	
	return 0; 
}

int get_num (void) {
	
	int num;
	
		printf("양수를 입력해주세요 : ");
		scanf("%d", &num);
	
	while (num < 0) {
		printf("음수로 입력하셨습니다.\n다시 입력해주세요.\n");
		printf("양수를 입력해주세요 : ");
		scanf("%d", &num);
	}
	
	return num;
}

// 양수를 입력해주세요 : 1
// 입력 값 : 1

// 양수를 입력해주세요 : -1
// 음수로 입력하셨습니다.
// 다시 입력해주세요.
// 양수를 입력해주세요 : 1
// 입력 값 : 1