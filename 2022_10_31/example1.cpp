#include <stdio.h>

int main(void) {
	
	char str[80] = "applejam";
	
	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);
	
	return 0;
}

// ���� ���ڿ� : applejam
// ���ڿ� �Է� : str
// �Է� �� ���ڿ� : str 
