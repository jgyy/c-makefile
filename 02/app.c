#include <stdio.h>
#include "A.h"
#include "B.h"
#define square(x) (x * x)

int foo(int b)
{
    return square(b);
}

int main(void)
{
    int a = 2;
    int b = 3;
    printf("max(%d, %d) = %d\n", a, b, max(a, b));
    printf("min(%d, %d) = %d\n", a, b, min(a, b));
    printf("sum(%d, %d) = %d\n", a, b, sum(a, b));
    printf("multiply(%d, %d) = %d\n", a, b, multiply(a, b));
    printf("square(%d) = %d\n", b, square(b));
    printf("foo(%d) = %d\n", b, foo(b));
    return 0;
}
