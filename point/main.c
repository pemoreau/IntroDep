#include <stdio.h>
#include <stdlib.h>

#include "point.h"
#include "triangle.h"

int main() {
    Point* p = create_point(5, 12);
    Point* q = create_point(1, 2);
    Point* r = create_point(10, 10);

    printf("p=%p\n", p);
    print_point(p);
    print_point(q);

    Triangle* t = create_triangle(p, q, r);
    print_triangle(t);
}