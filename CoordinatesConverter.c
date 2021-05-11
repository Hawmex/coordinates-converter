#include "stdio.h"
#include "math.h"

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    const double radius = sqrt(pow(x, 2) + pow(y, 2));
    const double angle = atan2(y, x);

    printf("%.1lf\n", radius);
    printf("%.1lf", angle);

    return 0;
}
