#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

typedef struct point point_t;

double calc_distance(point_t p1, point_t p2)
{
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;

    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char * argv[])
{
    double length;

    point_t p1;
    point_t p2 = {200, 100};

    p1.x = 100;
    p1.y = 200;

    length = calc_distance(p1, p2);

    printf("length = %f\n", length);

    return 0;
}