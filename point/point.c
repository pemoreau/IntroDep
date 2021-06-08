#include "point.h"

#include <stdio.h>
#include <stdlib.h>

Point* create_point(int a, int b) {
    Point* res = malloc(sizeof(Point));
    res->x = a;
    res->y = b;
    return res;
}

Point* copy(Point* p) { return create_point(p->x, p->y); }

void print_point(Point* p) { printf("[%d,%d]\n", p->x, p->y); }

void move(Point* p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}
