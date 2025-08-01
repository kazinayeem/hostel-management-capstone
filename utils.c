#include <stdio.h>
#include "utils.h"

int menu() {
    int choice;
    printf("\n--- Hostel Management Menu ---\n");
    printf("1. Add Resident\n");
    printf("2. Display Residents\n");
    printf("3. Remove Resident\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
