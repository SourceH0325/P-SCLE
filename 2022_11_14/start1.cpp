#include <stdio.h>

int main(void) {
	
	int score[5];
	int i;
	int total = 0;
	double avg;
	
	for (i = 0; i < 5; i++) {
		
		printf("�л��� ������ �Է��Ͻÿ�: ");
		
		scanf("%d", &score[i]);
		
		total += score[i];
	}
	
	avg = total / 5.0;
	
	printf("\n");
	
	printf("���: %.0f��", avg);
	
	return 0; 
}

// �л��� ������ �Է��Ͻÿ�: 10
// �л��� ������ �Է��Ͻÿ�: 20
// �л��� ������ �Է��Ͻÿ�: 30
// �л��� ������ �Է��Ͻÿ�: 40
// �л��� ������ �Է��Ͻÿ�: 50

// ���: 30��
