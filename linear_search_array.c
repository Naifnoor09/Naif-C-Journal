//Linear Search using array. 

#include <stdio.h>
int linearSearch(int arr[], int n, int item);
int main()
{
    int n,i,item;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Invlid array size. Re-Enter : ");
        scanf("%d",&n);
    }
    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the value for index  %d : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nElement to search : ");
    scanf("%d",&item);
    int result = linearSearch(arr,n,item);
    if(result != -1)
    {
        printf("Element found at index : %d", result);
    }
    else
    {
        printf("Element not found in the array.");
    }

    return 0;
}

int linearSearch(int arr[], int n, int item)
{
    int i = 0;
    int loc = -1;
     while(i < n )
     {
        if(arr[i] == item)
        {
            loc = i;
            break;
        }
        i++;
     }
    return loc;
}
