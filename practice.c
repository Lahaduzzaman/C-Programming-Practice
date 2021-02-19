#include <stdio.h>
#include <conio.h>
int main(void)
{
    int choice;
    float number, x;
    printf("(1)Meter to Feet.\n(2)Feet to Meter.\n(3)Pound to Ounce.\n(4)Ounce to Pound.\nEnter the number of your Choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter Meter=");
        scanf("%f", &number);
        x = number * 3.28;
        printf("Feet=%.3f", x);
    }
    else if (choice == 2)
    {
        printf("Enter Feet=");
        scanf("%f", &number);
        x = number / 3.28;
        printf("Meter=%.3f", x);
    }
    else if (choice == 3)
    {
        printf("Enter Pound=");
        scanf("%f", &number);
        x = number * 16;
        printf("Ounce=%.3f", x);
    }
    else if (choice == 4)
    {
        printf("Enter Ounce=");
        scanf("%f", &number);
        x = number / 16;
        printf("Pound=%.3f", x);
    }
    else
        printf("Invalid your choice...");
    getch();
}
