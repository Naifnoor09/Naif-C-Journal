#include <stdio.h>
int main()
{
    int n1, n2, n3,sum;
    int *ptr1 , *ptr2,*ptr3;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &n1,&n2,&n3);

if(n1%2!=0 && n2%2!=0 && n3%2!=0)
{
    ptr1=&n1;
    ptr2=&n2;
    ptr3=&n3;

    sum= *ptr1 + *ptr2 + *ptr3;
    printf("The Sum of three odd numbers is : %d", sum);
}
else
{
    printf("Wrong input");
}

    return 0;
}
