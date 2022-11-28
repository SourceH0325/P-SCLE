#include <stdio.h>

int main(void) {
	
	char animal[5][20];
	int i;
	int count;
	
	count = sizeof(animal) / sizeof(animal[0]);
	
	for (i = 0; i < count; i++) {
		
		scanf("%s", animal[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < count; i++) {
		
		printf("%s, ", animal[i]);
	}
	
	return 0;
	
} 

// »çÀÚ
// È£¶ûÀÌ
// ¾Ç¾î
// ÄÚ³¢¸®
// °í½¿µµÄ¡

// »çÀÚ, È£¶ûÀÌ, ¾Ç¾î, ÄÚ³¢¸®, °í½¿µµÄ¡
