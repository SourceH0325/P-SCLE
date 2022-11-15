#include <stdio.h>

void swap (double *pa, double *pb);

void line_up (double *max, double *mid, double *min);


int main(void) {
	
	double max, mid, min;
	
	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
	
	return 0;
} 

void swap (double *pa, double *pb) {

	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *max, double *mid, double *min) {

  if (*max < *mid) swap(max, mid);
  if (*max < *min) swap(max, min);
  if (*mid < *min) swap(mid, min);
}

// 실수값 3개 입력 : 3.5 2.7 9.5
// 정렬된 값 출력 : 9.5, 3.5, 2.7