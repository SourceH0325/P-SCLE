#include <stdio.h>

int main(void) {
	
	int score[3][4];
	int total;
	double avg;
	int i, j;
	
	for (i = 0; i < 3; i++) {
		
		printf("4������ ���� �Է� : ");
		
		for (j = 0; j < 4; j++) {
			
			scanf("%d", &score[i][j]);
		}
	} 
	
	printf("\n");
	
	for (i = 0; i < 3; i++) {
		
		total = 0;
		
		for (j = 0; j < 4; j++) {
			
			total += score[i][j];
		}
		
		avg = total / 4.0;
		
		
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}
	
	return 0;
		
} 

// 4������ ���� �Է� : 10 20 30 40
// 4������ ���� �Է� : 50 60 70 80
// 4������ ���� �Է� : 85 90 95 100

// ���� : 100, ��� : 25.00
// ���� : 260, ��� : 65.00
// ���� : 370, ��� : 92.50
