#include <stdio.h>

int main(void) {
	
	int score[5];
	int i;
	int total = 0;
	double avg;
	
	for(i = 0; i < 5; i++) {
		printf("�л��� ������ �Է��Ͻÿ�: ");
		
		scanf("%d", &score[i]);
		
		total += score[i];
	}
	
	avg = total / 5.0;
	
	printf("\n");
	
	printf("���: %.0f��", avg);
	
	return 0; 
}

// ��� : avg�� 
