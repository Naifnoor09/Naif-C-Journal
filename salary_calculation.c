#include <stdio.h>
int main()
{
    int id,ttw,rate;
    printf("Enter the 10 digit employee id :\n ");
    scanf("%d",&id);
    printf("Enter the total time worked :\n ");
    scanf("%d",&ttw);
    printf("Enter the hourly rate :\n ");
    scanf("%d",&rate);
    printf("The Total salary for the month is : %d\n",rate*ttw);
    return 0;
}