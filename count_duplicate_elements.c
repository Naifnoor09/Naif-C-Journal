#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid size, enter a positive number.");
    }
    int arr[n];
    for(i=0;i<n;i++)
        {
            printf("Enter the values for index %d :  ",i);
            scanf("%d",&arr[i]);
        }
    printf("Duplicate elemnets are : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d\t",count);
}
