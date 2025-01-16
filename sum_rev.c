#include <stdio.h>
int main()
{
    int n, ld,r=0, sum=0;
    printf("Enter a number : "); //  sum + reversing 
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        r=r+ld;
        r=r*10;
        n=n/10;
        sum=sum+ld;
    }
    printf("%d - Reverse\n",r);
    printf("%d - Sum\n",sum);
}
