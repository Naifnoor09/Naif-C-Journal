#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=50;i++)
    {
        sum=sum+i;
    }
    printf("the sum of natural numbers from 1 to 50 is : %d ",sum);
    return 0;
}