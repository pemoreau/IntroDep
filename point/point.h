#ifndef POINT
#define POINT

typedef struct _Point {
    int x;
    int y;
} Point;

Point* create_point(int a, int b);
void print_point(Point* p);
void move(Point* p, int dx, int dy);

#endif