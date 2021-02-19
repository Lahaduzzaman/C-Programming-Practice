#include <stdio.h>

void character(char a[])
{
    int i, upper, lower, space, other;
    i = upper = lower = space = other = 0;

    while (a[i] != '\0')
    {
        if (a[i] >= 65 && a[i] <= 90)
            upper++;
        else if (a[i] >= 97 && a[i] <= 122)
            lower++;
        else if (a[i] == ' ')
            space++;
        else
            other++;

        i++;
    }

    printf("Number of Uppercase letter= %d\n", upper);
    printf("Number of Lowercase letter= %d\n", lower);
    printf("Number of Space letter= %d\n", space);
    printf("Number of Other letter= %d\n", other);
}

int main()
{
    char a[100];
    printf("Enter anything: ");
    gets(a);

    character(a);

    return 0;
}
