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
		
		printf("���� �Է� : ");
		scanf("%d", &ary[i]);
	}
	
	printf("\n");
	printf("�ִ� �� : %d\n", max(ary, 10));
	printf("�ּ� �� : %d\n", min(ary, 10));
	
	return 0;
}

// ���� �Է� : 10
// ���� �Է� : 20
//���� �Է� : 30
// ���� �Է� : 40
// ���� �Է� : 50
// ���� �Է� : 60
// ���� �Է� : 70
// ���� �Է� : 80
// ���� �Է� : 90
// ���� �Է� : 99

// �ִ� �� : 99
// �ּ� �� : 10
