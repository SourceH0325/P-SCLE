#include <stdio.h>

int main(void) {
	
	int a;
	int *pa;
	
	pa = &a;
	*pa = 10;
	
	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);
	
	return 0;
}

// �����ͷ� a �� ��� : 10
// ���������� a �� ��� : 10
