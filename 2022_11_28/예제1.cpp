#include <stdio.h>

int main(void) {
	
	int score[3][4];
	int total;
	double avg;
	int i, j;
	
	for (i = 0; i < 3; i++) {
		
		printf("4과목의 점수 입력 : ");
		
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
		
		
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}
	
	return 0;
		
} 

// 4과목의 점수 입력 : 10 20 30 40
// 4과목의 점수 입력 : 50 60 70 80
// 4과목의 점수 입력 : 85 90 95 100

// 총점 : 100, 평균 : 25.00
// 총점 : 260, 평균 : 65.00
// 총점 : 370, 평균 : 92.50
