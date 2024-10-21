#include <stdio.h>
int main()
{
    int i=1,pro=1;

    while(i<=10)
    {
        pro=pro*i;
        i++;
    }
    printf("The Product of 10 numbers is : %d",pro);
    return 0;
}