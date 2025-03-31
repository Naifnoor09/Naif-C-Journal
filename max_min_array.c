
#include <stdio.h>
void findmaxmin(int arr[], int n, int *max, int *min);
int main()
{
    int n,i,max,min;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Enter a valid size : ");
        scanf("%d",&n);
    }
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value for index %d : ",i);
        scanf("%d",&arr[i]);
    }  
    findmaxmin(arr,n,&max,&min);

    printf("\nThe Maximum element is : %d", max);
    printf("\nThe Minimum element is : %d", min);
    return 0;
}

void findmaxmin(int arr[], int n, int *max, int *min)
{
    int i; 
    arr[0] = *max;
    arr[0] = *min;
    
    for(i=1;i<n;i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

