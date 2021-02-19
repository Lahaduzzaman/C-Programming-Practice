
#include <stdio.h>
#define MAX 20

int array[MAX] = {1, 2, 3, 4, 6, 7, 9, 11, 12, 14, 15, 16, 17, 19, 33, 34, 43, 45, 55, 66};
void printline(int count)
{
    int i;
    for (i = 0; i < count - 1; i++)
    {
        printf("=");
    }
    printf("=\n");
}

int find(int data)
{
    int lowerBound = 0;
    int upperBound = MAX - 1;
    int midPoint = -1;
    int comparision = 0;
    int index = -1;

    while (lowerBound <= upperBound)
    {
        printf("Comparison %d\n", (comparision + 1));
        printf("lowerBound : %d, array[%d]= %d\n", lowerBound, lowerBound, array[lowerBound]);
        printf("upperBound : %d, array[%d]= %d\n", upperBound, upperBound, array[upperBound]);
        comparision++;

        midPoint = lowerBound + (upperBound - lowerBound) / 2;

        if (array[midPoint] == data)
        {
            index = midPoint;
            break;
        }
        else
        {
            if (array[midPoint] < data)
            {
                lowerBound = midPoint + 1;
            }
            else
            {
                upperBound = midPoint - 1;
            }
        }
    }
    printf("Total comparisons made: %d", comparision);
    return index;
}
void display()
{
    int i;
    printf("[");

    for (i = 0; i < MAX; i++)
    {
        printf("%d", array[i]);
    }
    printf("]\n");
}

void main()
{
    printf("Input array: ");
    display();
    printline(50);

    int location = find(55);

    if (location != -1)
        printf("\nElement found at location %d", (location + 1));
    else
        printf("\nElements not found.");
}
