#include <stdio.h>
#include <string.h>
#include "hostel.h"

void addResident(Resident residents[], int size) {
    int room;
    printf("Enter room number: ");
    scanf("%d", &room);
    if (residents[room].isOccupied) {
        printf("Room is already occupied.\n");
        return;
    }
    residents[room].roomNumber = room;
    printf("Enter name: ");
    scanf(" %[^\n]", residents[room].name);
    printf("Enter age: ");
    scanf("%d", &residents[room].age);
    printf("Enter gender (M/F): ");
    scanf(" %c", &residents[room].gender);
    residents[room].isOccupied = 1;
    printf("Resident added successfully.\n");
}

void displayResidents(const Resident residents[], int size) {
    printf("\n--- Resident List ---\n");
    for (int i = 0; i < size; i++) {
        if (residents[i].isOccupied) {
            printf("Room %d: %s, Age: %d, Gender: %c\n",
                   residents[i].roomNumber,
                   residents[i].name,
                   residents[i].age,
                   residents[i].gender);
        }
    }
}

void removeResident(Resident residents[], int size, int roomNumber) {
    if (!residents[roomNumber].isOccupied) {
        printf("Room %d is already empty.\n", roomNumber);
        return;
    }
    residents[roomNumber].isOccupied = 0;
    printf("Resident removed from room %d.\n", roomNumber);
}
