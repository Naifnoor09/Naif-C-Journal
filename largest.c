#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter Three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    //conditons to check the largest 
    if(n1>n2 && n1>n3)
    {
        printf("%d is the largest\n",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%d is the lagest\n ",n2);
    }
    else
    {
        printf("%d is the largest\n",n3);
    }
    return 0;
}