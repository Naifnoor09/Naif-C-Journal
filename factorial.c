#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    //Conditions for checcking factorial (example 5! = 5*4*3*2*1 which results in 120 )
    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of %d is : %d ",n,fact);
    return 0;
}