#include <stdio.h>
int largest(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}
int main()
{
    int a,b,l;
    printf("Enter first number :  ");
    scanf("%d",&a);
    printf("Enter second number :  ");
    scanf("%d",&b);
    l=largest(a,b);
    printf("The largest among %d & %d is : %d ",a,b,l);
    return 0;
}
