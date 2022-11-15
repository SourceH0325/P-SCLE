#include <stdio.h>

double centi_to_meter ( int cm );

int main(void) {

    double res;

    res = centi_to_meter(187);
    printf("%.2lfM\n", res);

    return 0;
}

double centi_to_meter ( int cm ) {
    
    double temp;
    
    temp = (double) cm / 100;

    return temp;
}

// 1.87M