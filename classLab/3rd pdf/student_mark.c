#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
    char dob[20];
};

void createFile(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }
    fclose(file);
}

void addRecord(const char *filename, const struct Student *student) {
    FILE *file = fopen(filename, "ab");
    if (!file) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(student, sizeof(struct Student), 1, file);
    fclose(file);
}

void deleteRecord(const char *filename, int rollToDelete) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    FILE *tempFile = fopen("temp.bin", "wb");
    if (!tempFile) {
        perror("Error creating temporary file");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    struct Student currentStudent;
    while (fread(&currentStudent, sizeof(struct Student), 1, file) == 1) {
        if (currentStudent.roll != rollToDelete) {
            fwrite(&currentStudent, sizeof(struct Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(filename);
    rename("temp.bin", filename);
}

void modifyMarks(const char *filename) {
    FILE *file = fopen(filename, "r+b");
    if (!file) {
        perror("Error opening file for reading and writing");
        exit(EXIT_FAILURE);
    }

    struct Student currentStudent;
    while (fread(&currentStudent, sizeof(struct Student), 1, file) == 1) {
        if (currentStudent.marks > 40 && currentStudent.marks < 50) {
            currentStudent.marks += 10;
            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&currentStudent, sizeof(struct Student), 1, file);
            fseek(file, 0, SEEK_CUR);
        }
    }

    fclose(file);
}

void displayFileContents(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    struct Student student;
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s, Roll: %d, Marks: %.2f, DOB: %s\n",
               student.name, student.roll, student.marks, student.dob);
    }

    fclose(file);
}

int main() {
    const char filename[] = "student_data.bin";
    createFile(filename);

    struct Student student;

    strcpy(student.name, "Jaidip Patra");
    student.roll = 1;
    student.marks = 50.5;
    strcpy(student.dob, "01-01-2000");
    addRecord(filename, &student);

    strcpy(student.name, "Joydipta Biswas");
    student.roll = 2;
    student.marks = 45.0;
    strcpy(student.dob, "02-02-2001");
    addRecord(filename, &student);

    printf("File contents after adding records:\n");
    displayFileContents(filename);

    printf("\nDeleting record with roll number 1...\n");
    deleteRecord(filename, 1);
    printf("\nFile contents after deleting record:\n");
    displayFileContents(filename);

    printf("\nModifying marks...\n");
    modifyMarks(filename);
    printf("\nFile contents after modifying marks:\n");
    displayFileContents(filename);

    return 0;
}
