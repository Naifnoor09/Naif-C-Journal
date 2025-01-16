#include <stdio.h>

int isPrime(int num);  
void isSmallest(int *a, int *b, int *small);

int main()
{
    int num1, num2;
    int small;

    printf("Enter two prime numbers: ");
    scanf("%d %d", &num1, &num2);

    if (!isPrime(num1) || !isPrime(num2))
    {
        printf("Both numbers must be prime.\n");
        return 1;  // Exit if numbers are not prime
    }

    isSmallest(&num1, &num2, &small);
    printf("The smallest prime number between %d & %d is: %d\n", num1, num2, small);

    return 0;
}

int isPrime(int num)
{ 
    if (num < 2)
        return 0;
    
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void isSmallest(int *a, int *b, int *small)
{
    if (*a > *b)
    {
        *small = *b;
    }
    else
    {
        *small = *a;
    }
}
