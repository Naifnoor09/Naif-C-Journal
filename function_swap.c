#include <stdio.h>
void swap(int *x , int *y)
{
    int temp;
   temp= *x;
   *x= *y;
   *y= temp;
}
int main()
{
    int a,b,temp;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    printf("a = %d b = %d\n ",a,b);
    swap(&a,&b);
    printf("a = %d b = %d ",a,b);
return 0;
}
