#include <stdio.h>
#include "hostel.h"
#include "utils.h"

#define SIZE 100

int main()
{
    Resident residents[SIZE] = {0};
    int running = 1;

    while (running)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            addResident(residents, SIZE);
            break;
        case 2:
            displayResidents(residents, SIZE);
            break;
        case 3:
        {
            int roomNumber;
            printf("Enter room number to remove resident: ");
            scanf("%d", &roomNumber);
            removeResident(residents, SIZE, roomNumber);
            break;
        }
        case 4:
            running = 0;
            break;
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
