#include <stdio.h>

int main(void) {
	
	int a;
	double b;
	char c;
	
	printf("int�� ������ �ּ� : %u\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);
	
	return 0;
}

// int�� ������ �ּ� : 6487628
// double�� ������ �ּ� : 6487616
// char�� ������ �ּ� : 6487615
