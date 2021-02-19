#include <stdio.h>
int main()
{
    float r, area;
    printf("Enter radius r= ");
    scanf("%f", &r);

    area = 3.1416 * r * r;
    printf("%f", area);

    return 0;
}
