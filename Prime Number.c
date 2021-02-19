#include <stdio.h>
int main()
{
    int a, x, c = 0;
    printf("Enter a= ");
    scanf("%d", &a);
    for (x = 2; x < a; x++)
    {
        if (a % x == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("prime");
    else
        printf("Not prime");

    return 0;
}
