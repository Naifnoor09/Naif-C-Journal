// Pascal Triangle
#include<stdio.h>

int main()
{
    int n, coeff;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) 
    {
        // Printing spaces for formatting
        for(int j = 0; j < n - i - 1; j++) 
        {
            printf(" ");
        }

        // Printing numbers in the row
        coeff = 1; // First number is always 1
        for(int j = 0; j <= i; j++) 
        {
            printf("* ");
            coeff = coeff * (i - j) / (j + 1); // Update coefficient
        }
        printf("\n");
    }

    return 0;
}

