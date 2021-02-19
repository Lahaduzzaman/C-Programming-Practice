#include <stdio.h>

void prime(int a)
{
    int x, c = 0;
    for (x = 2; x < a; x++)
    {
        if (a % x == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("%d is Prime", a);
    else
        printf("%d is not Prime", a);
}

int main()
{
    int a;
    printf("Enter a= ");
    scanf("%d", &a);

    prime(a);

    return 0;
}
