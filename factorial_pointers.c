#include <stdio.h>
void fact(int n, int *factorial);

int main()
{
    int n;
    int factorial;
    printf("Enter a number : ");
    scanf("%d",&n);
    fact(n,&factorial);
     printf("The Factorial of %d is : %d ",n,factorial);

    return 0;
}
void fact(int n, int *factorial)
{
    *factorial=1;
    for(int i=1;i<=n;i++)
    {
        *factorial=*factorial*i;
    }
}
