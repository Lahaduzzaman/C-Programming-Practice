#include<stdio.h>

int main()

{
    int x;
    x=1;
    print:
        printf("%d\n",x);
        x++;

    if(x<=9)
        goto print;

    return 0;
}
