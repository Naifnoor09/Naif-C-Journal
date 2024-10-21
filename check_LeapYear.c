#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year to check whether leap year or not : ");
    scanf("%d",&year);

    //condition to check leap year (Must be divisible by 4 or Must be divisible by 400 )

    if(year%4==0 || year%400==0)
    {
        printf("%d is a leap Year\n",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
}