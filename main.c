#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, area;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of Circle: %.2f", area);
    return 0;
}
