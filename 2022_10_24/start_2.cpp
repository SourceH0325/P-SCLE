#include <stdio.h>

int main(void) {
	
	int score[5];
	int i;
	int total = 0;
	double avg;
	
	for(i = 0; i < 5; i++) {
		printf("학생의 성적을 입력하시오: ");
		
		scanf("%d", &score[i]);
		
		total += score[i];
	}
	
	avg = total / 5.0;
	
	printf("\n");
	
	printf("평균: %.0f점", avg);
	
	return 0; 
}

// 평균 : avg값 
