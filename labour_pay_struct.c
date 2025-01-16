//Labour payment calculation 
#include <stdio.h>
// Defining a structure for labour details
struct Labour
 {
    int labourID;
    char name[50];
    float dailyWage;
    int daysWorked;
};

int main() 
{
    struct Labour labours[5];
    float totalPayment = 0;
    
    // Accept details of 5 labours
    for (int i = 0; i < 5; i++)
     {
        printf("\nEnter details for labour %d\n", i + 1);
        printf("Labour ID: ");
        scanf("%d", &labours[i].labourID);
        printf("Name: ");
        scanf("%s", labours[i].name);
        printf("Daily Wage: ");
        scanf("%f", &labours[i].dailyWage);
        printf("Days Worked: ");
        scanf("%d", &labours[i].daysWorked);
        
        // Calculate payment for each labour
        totalPayment += labours[i].dailyWage * labours[i].daysWorked;
    }
    
    printf("\nTotal Payment for all labours: %.2f\n", totalPayment);
    
    return 0;
}
