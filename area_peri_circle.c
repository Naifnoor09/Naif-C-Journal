#include <stdio.h>
int main()
{
    float r, pi=3.14,area,peri;
    printf("Enter the radius of the circle :\n ");
    scanf("%f",&r);

    //calculation area
    area =pi*(r*r);
    printf("The area of the circle is : %.2f\n",area);

    //calculation perimerter 
    peri=2*pi*r;
    printf("The perimeter of the circle is : %.2f/n",peri);

    return 0;
}
