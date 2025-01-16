//sum of array
#include <stdio.h>
int main()
{
    int arr[5];
    int n,sum=0;
    printf("Enter elements into the array :\n ");
    for(int i=0;i<=5;i++)
    {
        printf("Enter element %d into the array : ",i);
        scanf("%d",&n);
         sum=sum+n;
    }
printf("sum : %d",sum);
return 0;
}
