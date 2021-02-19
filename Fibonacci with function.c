#include<stdio.h>

void fibonacci(int n)
{
    int first=0,second=1,fibo,count=0;

    while (count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;

    }

}


int main()
{
    int n;
    printf("Enter range= ");
    scanf("%d",&n);

    fibonacci(n);


    return 0;
}

