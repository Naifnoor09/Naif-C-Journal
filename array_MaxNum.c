//find the max number in the array
#include <stdio.h>
int main()
{
    int arr[5];
    int mx=arr[0];
    for(int i =1;i<5;i++)
    {
        printf("Enter the Elements for %d an array : ",i);
        scanf("%d",&arr[i]);
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    printf("Maximum number : %d",mx);
}
