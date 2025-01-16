#include <stdio.h>

// Function to calculate BMI
float calculate_bmi(float weight, float height_m) 
{
    return weight / (height_m * height_m);
}

// Function to determine BMI category for adults
void classify_adult_bmi(float bmi) 
{
    if (bmi < 18.5) 
    {
        printf("BMI Category: Underweight\n");
    } 
    else if (bmi >= 18.5 && bmi < 25) 
    {
        printf("BMI Category: Normal weight\n");
    } 
    else if (bmi >= 25 && bmi < 30) 
    {
        printf("BMI Category: Overweight\n");
    } 
    else if (bmi >= 30 && bmi < 35) 
    {
        printf("BMI Category: Obese (Class I)\n");
    } 
    else if (bmi >= 35 && bmi < 40) 
    {
        printf("BMI Category: Obese (Class II)\n");
    } 
    else 
    {
        printf("BMI Category: Obese (Class III - Severe obesity)\n");
    }
}

// Function to determine BMI category for children
void classify_child_bmi(float bmi) {
    
    if (bmi < -3) 
    {
        printf("BMI Category: Severely Underweight (Child)\n");
    } 
    else if (bmi < -2) 
    {
        printf("BMI Category: Underweight (Child)\n");
    } 
    else if (bmi >= -2 && bmi <= 1) 
    {
        printf("BMI Category: Normal weight (Child)\n");
    } 
    else if (bmi > 1 && bmi <= 2) 
    {
        printf("BMI Category: Overweight (Child)\n");
    } 
    else if (bmi > 2) 
    {
        printf("BMI Category: Obese (Child)\n");
    }
}

int main() {
    double weight, height_cm, height_m, bmi;
    int age;

    // Input details
    printf("Enter your Weight in Kg: ");
    scanf("%lf", &weight);

    printf("Enter your Height in centimetres: ");
    scanf("%lf", &height_cm);

    printf("Enter your Age in years: ");
    scanf("%d", &age);

    // Convert height to meters
    height_m = height_cm / 100;

    // Calculate BMI
    bmi = calculate_bmi(weight, height_m);

    printf("\nYour BMI is: %.2f\n", bmi);

    // Determine BMI category based on age
    if (age < 5) 
    {
        printf("BMI calculation for children under 5 requires specialized growth charts.\n");
    } 
    else if (age >= 5 && age < 19) 
    {
        printf("Age Group: Child/Teen\n");
        classify_child_bmi(bmi);
    } 
    else 
    {
        printf("Age Group: Adult\n");
        classify_adult_bmi(bmi);
    }

    return 0;
}
