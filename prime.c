#include <stdio.h>
int main()
{
    int n, i, count=0;
    printf("Enter a number to check whether a prime number or not : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            printf("It s a prime number\n");
        }
        else 
        {
            printf("It is not a Prime number\n");
        }
        
    return 0;
}
