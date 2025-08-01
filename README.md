# 🏨 Hostel Management System - Capstone Project

### 📚 Course: Software Development Capstone Project (SE133 - H2)  
### 🏫 Department of Software Engineering  
### 🏛️ Daffodil International University

---

## 👥 Group Members – Group 7

| Name                   | Student ID     |
|------------------------|----------------|
| Emtiaz Hossain         | 242-35-744     |
| Arpita Barmon          | 242-35-794     |
| Jahid Hossain          | 242-35-142     |
| Mohammad Ali Nayeem    | 242-35-022     |

---



## 📬 Submitted To:

#### **Sumona Afroz** 
Lecturer  
Department of Software Engineering  
Daffodil International University  


---

## 🧪 Sample Output Screenshots

### 🔸 Main Menu
![Main Menu](screenshots/image1.png)

### 🔸 Adding a Resident
![Add Resident](screenshots/image2.png)

### 🔸 Displaying All Residents
![Display Residents](screenshots/image3.png)


## 📌 Project Concept

The **Hostel Management System** is a mid-level, beginner-friendly C programming project designed to help automate and manage hostel-related tasks such as room assignments and resident information.

This project aims to demonstrate core concepts of structured programming in C, especially:
- Modular programming using multiple `.c` and `.h` files.
- Use of structs for data storage.
- Menu-driven interface for user interaction.

It replaces manual systems with a basic, functional command-line application that simulates real-world hostel operations.

---

## 🧠 Project Idea and Plan


### 🎯 Objectives:
- Digitize the hostel management process.
- Provide a user-friendly menu for adding, removing, and displaying residents.
- Ensure clean and modular code using C header and source files.
- Keep it scalable for future improvements like file handling or authentication.

### 🧱 Key Features:
- Resident check-in (add resident to room)
- View all current residents
- Resident check-out (remove resident from room)
- Menu system to handle all operations
- Mid-level complexity, written with beginner C programmers in mind

---

## 📂 Project Structure


### 🔧 Functional Breakdown
- `hostel.h` / `hostel.c`: Core functionalities like adding/removing/displaying residents.
- `utils.h` / `utils.c`: Menu-driven interface for user interaction.
- `app.c`: Starts the application and connects all modules.
- `Makefile`: Automates the build process.

---



---

## 🔧 Code Overview

### 🔹 hostel.h
Defines the structure of a `Resident` and declares core hostel management functions:
```c
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



--- Hostel Management Menu ---
1. Add Resident
2. Display Residents
3. Remove Resident
4. Exit
Enter your choice: 1
Enter room number: 5
Enter name: John Doe
Enter age: 20
Enter gender (M/F): M
Resident added successfully.
