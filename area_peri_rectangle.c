#include <stdio.h>
int main()
{
    int area,perimeter;
    int h=10,w=7;
    
    //calculation of area 
    area=h*w;
    printf("The area of the rectangle is : %d\n",area);

    //calculation of perimeter 
    perimeter= 2*(h+w);
    printf("The permimeter of the rectangle is : %d\n",perimeter);
    return 0;
}
