#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;


    printf("Integer: value = %d, pointer = %p, pointed value = %d\n", a, p1, *p1);
    printf("Float: value = %.2f, pointer = %p, pointed value = %.2f\n", b, p2, *p2);
    printf("Char: value = %c, pointer = %p, pointed value = %c\n", c, p3, *p3);

    return 0;
}
