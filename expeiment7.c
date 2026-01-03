#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("a = %d, b = %d", a, b);
    return 0;
}
