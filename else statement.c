#include <stdio.h>

int main()

{
    int time;
    printf("Enter time = ");
    scanf("%d", &time);

    if (time <= 12)
    {
        printf("Now it's morning\n");
        printf("Lahad\n");
    }
    else
    {
        printf("It's not morning\n");
        printf("Lahad\n");
    }

    return 0;
}
