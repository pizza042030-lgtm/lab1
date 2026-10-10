#include <stdio.h>
#include <assert.h>
#include "my_assert.h"

int main(void) {
    int x = 5;

    assert(x == 5);
    my_assert(x == 5);
    printf("첫 번째 검사 통과\n");

    my_assert(x == 3);
    printf("이 줄은 출력되면 안 됨\n");
    return 0;
}
