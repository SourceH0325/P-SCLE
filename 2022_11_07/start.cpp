void swap(double *pa, double *pb);

void line_up(double *max, double *mid, double *min);

#include <stdio.h>

int main(void) {
	
	double max, mid, min;
	
	printf("�Ǽ� �� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
	
	return 0;
}

void swap(double *pa, double *pb) {
	
	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// I dont know C++
