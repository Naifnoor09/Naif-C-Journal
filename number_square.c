//Number Square
#include <stdio.h>
int main()
{
    int n;
    printf("Enter No : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}