#include <string.h>
#include <stdio.h>

int main(void) {
	
	char str1[80] = "cat";
	char str2[80];
	
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s", str1, str2);
	
	return 0;
}

// tiger, tiger
