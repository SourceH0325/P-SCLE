#include <stdio.h>

int main() {
    int a, b = 0;
    
    for ( a = 1; a <= 10; a++) {
        b = b + a;
    }
    
    printf("1부터 10까지 합은 %d입니다. \n", b);
}