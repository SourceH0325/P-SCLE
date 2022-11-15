#include <stdio.h>

int sum ( int x, int y );

int main() {

    int a = 10, b = 20;
    int result;

    result = sum( a, b );
    printf("결과 값 : %d\n", result);

    return 0;
}

int sum( int x, int y ) {
    
    int temp;
    temp = x + y;

    return temp;
}

// 결과 값 : 30