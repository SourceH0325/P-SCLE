void swap(int *pa, int *pb);

#include <stdio.h>

int main(void) {
	
	int a = 10, b = 20;
	
	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	
	return 0;
}

void swap(int *pa, int *pb) {
	
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// a : 20, b : 10
