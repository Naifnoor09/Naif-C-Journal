#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :\n");
    scanf("%d",&age);

    //condition to check age

    if(age>=18)
    {
        printf("Eligible To Vote\n");

    }
    else 
    {
        printf("Not Eligible To Vote\n");
    }
    return 0;
}