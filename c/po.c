#include <stdio.h>

int main() {
    int test[] = {1,2,3,};
    int *p = test;

    printf("%d\n", *(p + 1));

    return 0;
}

