#include <stdio.h>

int main(void) {
	
	int i;
	int v;
	int total = 0;
	double avg;

	printf("학생 명 수를 입력하시오 : ");
	scanf("%d", &v);
    	printf("\n");

	int score[v];
	
	for(i = 0; i < v; i++) {
		
		printf("학생의 성적을 입력하시오 : ");
		
		scanf("%d", &score[i]);
		
		total += score[i];
	}
	
	avg = total / v;
	
	printf("\n");
	printf("평균 : %.1lf\n", avg);
	
	return 0; 
}

// 학생 명 수를 입력하시오 : 7

// 학생의 성적을 입력하시오 : 10
// 학생의 성적을 입력하시오 : 20
// 학생의 성적을 입력하시오 : 30
// 학생의 성적을 입력하시오 : 40
// 학생의 성적을 입력하시오 : 50
// 학생의 성적을 입력하시오 : 60
// 학생의 성적을 입력하시오 : 70

// 평균 : 40.0
