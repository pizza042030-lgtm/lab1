#include <stdio.h>
#include "calc.h"
double divide(double a, double b) {
    if (b == 0) { printf("0으로 나눌 수 없습니다.\n"); return 0; }
    return a / b;
}
