#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :\n ");
    scanf("%d",&n);

    //conditions to check whether it is even or odd (Must be divisible by 2)

    if(n%2==0)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }
    return 0;
}
