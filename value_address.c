#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    int *ptr=&i;
    printf("The address of i is : %u\n", &i);
    printf("The value of i is : %d\n", *ptr);
    return 0;
}
