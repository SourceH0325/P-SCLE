#include <stdio.h>

int main(void) {
	
	int score[5];
	int i;
	int total = 0;
	double avg;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}
	
	for(i = 0; i < 5; i++) {
		total += score[i];
	}
	
	avg = total / 5.0;
	
	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	
	printf("\n");
	
	printf("Æò±Õ: %.1f", avg);
	
	return 0; 
}

// Æò±Õ : avg°ª 
