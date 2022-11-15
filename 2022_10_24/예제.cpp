#include <stdio.h>

int main(void) {

	int score[5];
	int i;
	int total = 0;
	double avg;
	
	for(i = 0; i < 5; i++) {
        printf("값을 입력해주세요 : ");
		scanf("%d", &score[i]);
	}
	
	for(i = 0; i < 5; i++) {
		total += score[i];
	}
	
	avg = total / 5.0;
    
    printf("\n");
	
	for (i = 0; i < 5; i++) {
		printf("입력 값 : %5d\n", score[i]);
	}
	
	printf("\n");
	
	printf("평균 : %.1f\n", avg);
	
	return 0; 
}

//값을 입력해주세요 : 10
//값을 입력해주세요 : 20
//값을 입력해주세요 : 30
//값을 입력해주세요 : 40
//값을 입력해주세요 : 50

//입력 값 :    10
//입력 값 :    20
//입력 값 :    30
//입력 값 :    40
//입력 값 :    50

//평균 : 30.0