#ifndef HOSTEL_H
#define HOSTEL_H

typedef struct {
    int roomNumber;
    char name[50];
    int age;
    char gender;
    int isOccupied;
} Resident;

void addResident(Resident residents[], int size);
void displayResidents(const Resident residents[], int size);
void removeResident(Resident residents[], int size, int roomNumber);

#endif
