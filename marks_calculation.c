#include <stdio.h>
int main()
{
    int roll, n1, n2, n3;
    char name[50];
    float total, per;
    
    printf("Enter the name : \n");
    scanf("%s", name); // Read the name as a string

    printf("Enter the roll number : \n");
    scanf("%d", &roll);

    printf("Enter the marks of three subjects :\n ");
    scanf("%d%d%d", &n1, &n2, &n3);

    // Calculation
    total = n1 + n2 + n3;
    per = (total / 300.0) * 100; // Use 300.0 for floating-point division

    printf("Total marks : %.2f\n", total);
    printf("Total Percentage obtained : %.2f\n", per);

    if (per <= 100 && per >= 80)
    {
        printf("Division A\n");
    }
    else if (per < 80 && per >= 50)
    {
        printf("Grade B\n");
    }
    else if (per < 50 && per >= 30)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}
