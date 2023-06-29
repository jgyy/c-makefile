#include "test.h"
#include <stdio.h>
#include <stdlib.h>

double compute_square(int x)
{
    return SQUARE(x);
}

double compute_circle_area(int radius)
{
    return PI * compute_square(radius);
}

int main(int argc, char **argv)
{
    int radius = DEFAULT_RADIUS;
    if (argc > 1)
    {
        radius = atoi(argv[1]);
    }
    printf("Area of circle with radius %d is %f\n", radius, compute_circle_area(radius));
    return 0;
}
