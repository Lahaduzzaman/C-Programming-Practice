#include <stdio.h>

void circle(char ch)
{
    float i, area;
    printf("\nEnter the radius of circle= ");
    scanf("%f", &i);
    area = 3.1416 * i * i;
    printf("\nArea of Circle is= %.2f", area);
}

void triangle(char ch)
{
    float i, j, area;
    printf("\nEnter the base of Triangle= ");
    scanf("%f", &i);
    printf("\nEnter the height of Triangle= ");
    scanf("%f", &j);
    area = (float)1 / 2 * i * j;
    printf("\nArea of Triangle is= %.2f", area);
}

void rectangle(char ch)
{
    float i, j, area;
    printf("\nEnter the base of Rectangle= ");
    scanf("%f", &i);
    printf("\nEnter the height of Rectangle= ");
    scanf("%f", &j);
    area = i * j;
    printf("\nArea of Rectangle is= %.2f", area);
}

int main()
{
    char ch;
    printf("Press C for Circle\n");
    printf("Press T for Triangle\n");
    printf("Press R for Rectangle\n");

    printf("\nEnter your choice: ");
    scanf("%c", &ch);

    if (ch == 'C' || ch == 'c')
    {
        circle(ch);
    }
    else if (ch == 'T' || ch == 't')
    {
        triangle(ch);
    }
    else if (ch == 'R' || ch == 'r')
    {
        rectangle(ch);
    }
    else
        printf("\nInvalid choice.\n");

    return 0;
}
