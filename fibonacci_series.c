#include <stdio.h>
int main()
{
    int n,a=0,b=1,result;
    printf("Enter the generation limit : ");
    scanf("%d",&n);

    //conditions for fibonacci (we initialise a=0 & b=1)

    for(int i=1;i<=n;i++)
    {                       //(example a=3,b=5)
       printf(" %d ",a);    //first printing variable a 
       result=a+b;          //adding a+b and storing it in variable result (result = 8 as 3+5)
       a=b;                 //storing the value of variable b in variable a (a=5) 
       b=result;            //storing the value of result in variable b (b=8)
    }
    return 0;
}