#include <stdio.h>

int main() {
    int a, b;
    
    for ( a = 0; a <= 4; a++) {
        printf("\n");
        for ( b = 0; b <= 4; b++) {
            if ( a == b || a + b == 4) {
                printf("X");
            }
            else {
                printf("O");
            }
        }
    }
    printf("\n");
    return 0;
}

// XOOOX
// OXOXO
// OOXOO
// OXOXO
// XOOOX