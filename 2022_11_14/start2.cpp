#include <stdio.h>

int max(int data[], int size) {
	
	int i;
	int max_s = 0;
	
	for (i = 0; i < size; i++) {
		
		if (max_s < data[i]) {
			
			max_s = data[i];
		}
	}
	
	return max_s;
}

int min(int data[], int size) {
	
	int i;
	int min_s = 101;
	
	for (i = 0; i < size; i++) {
		
		if (min_s > data[i]) {
			
			min_s = data[i];
		}
	}
	
	return min_s;
}

int main(void) {
	
	int ary[10] = {0, };
	
	for (int i = 0; i < 10; i++) {
		
		printf("정수 입력 : ");
		scanf("%d", &ary[i]);
	}
	
	printf("\n");
	printf("최대 값 : %d\n", max(ary, 10));
	printf("최솟 값 : %d\n", min(ary, 10));
	
	return 0;
}

// 정수 입력 : 10
// 정수 입력 : 20
// 정수 입력 : 30
// 정수 입력 : 40
// 정수 입력 : 50
// 정수 입력 : 60
// 정수 입력 : 70
// 정수 입력 : 80
// 정수 입력 : 90
// 정수 입력 : 99

// 최대 값 : 99
// 최솟 값 : 10
