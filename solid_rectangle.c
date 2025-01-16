//solid rectangle
#include <stdio.h>
int main()
{
    int m,n;    
    printf("Enter the no of rows : ");
    scanf("%d",&m);
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
        printf("*");
        }
        printf("\n");
    }
return 0;
}
