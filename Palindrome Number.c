#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter num= ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    if (num == sum)
        printf("This is a palindrome Number\n");
    else
        printf("This is not a palindrome Number\n");

    return 0;
}
