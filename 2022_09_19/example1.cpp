#include <stdio.h>

int get_num (void);

int main (void) {
	
	int result;
	result = get_num();
	
	printf("��ȯ ��: %d", result);
	
	return 0; 
}

int get_num (void) {
	
	int num;
	
	printf("����Է�: ");
	scanf("%d", &num);
	
	return num;
}

// ��ȯ ��: num��  
