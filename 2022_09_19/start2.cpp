#include <stdio.h>

void sum (int n);

int main (void) {
	
	sum	(10);
	sum	(100);
	
	return 0;
}

void sum (int n) {
	
	int i, tot = 0;
	
	for (i = 1; i <= n; i++) {
		
		tot = tot + i;
		
	}
	
	printf("1부터 %d까지의 합은 %d입니다.\n", n, tot);
}

// 1부터 10까지의 합은 55입니다.
// 1부터 100까지의 합은 5050입니다.     
