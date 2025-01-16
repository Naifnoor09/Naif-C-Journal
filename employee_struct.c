#include <stdio.h>

// Define a structure for employee details
struct Employee {
    int empID;
    char name[50];
    char address[100];
    char mobileNo[15];
    char designation[30];
    char department[30];
    float ctc;
};

int main() {
    struct Employee employees[5];
    
    // Accept details of 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        
        printf("Employee ID: ");
        scanf("%d", &employees[i].empID);
        
        printf("Name (single word): ");
        scanf("%s", employees[i].name);

        printf("Address (single word): ");
        scanf("%s", employees[i].address);

        printf("Mobile No: ");
        scanf("%s", employees[i].mobileNo);

        printf("Designation (single word): ");
        scanf("%s", employees[i].designation);

        printf("Department (single word): ");
        scanf("%s", employees[i].department);

        printf("CTC: ");
        scanf("%f", &employees[i].ctc);
    }
    
    // Display the details of each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", employees[i].empID);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Mobile No: %s\n", employees[i].mobileNo);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("CTC: %.2f\n", employees[i].ctc);
    }
    return 0;
}
