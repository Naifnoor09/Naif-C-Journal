//Binary Search using arrays.

#include <stdio.h>
int binarysearch(int arr[], int size, int item);
int main()
{
    int i,n,item;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Invalid size of the array entered. Re enter : ");
        scanf("%d",&n);
    }
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the sorted elements in the array for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    int result = binarysearch(arr,n,item);
    if(result != -1)
    {
        printf("\nElement found at index %d",result);
    }
    else 
    {
        printf("\nElement not found in the array");
    }

}

int binarysearch(int arr[], int size, int item)
{
    int i = 0;
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == item)
        {
            return mid;
        }
        else if(arr[mid] < item)
        {
            start = mid + 1;
        }
        else if (arr[mid] > item )
        {
            end = mid - 1; 
        }
    }
    return - 1;
}
