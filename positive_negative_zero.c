#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);

//condition to check 

if(n>0)
{
    printf("It is positive \n");
}
else if (n<0)
{
    printf("It is negative\n");
}
else 
{
    printf("It is zero \n");
}
    return 0;
}