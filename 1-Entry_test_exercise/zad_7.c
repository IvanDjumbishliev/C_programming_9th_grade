#include <stdio.h>
#include <string.h>

//Да се направи структура “student”, която да съдържа данните за даден ученик: име (до 20 символа), номер в клас и среден успех. 
//Да се създаде един ученик във функцията main и да се принтират данните за него на екрана.

typedef struct student {
    char name[20];
    int classNumber;
    float averageGrade;
} student;

int main() {
    
    student s;
    strcpy(s.name, "Ivan");
    s.classNumber = 10;
    s.averageGrade = 5.50;
    printf("Name: %s\n", s.name);
    printf("Class number: %d\n", s.classNumber);
    printf("Average grade: %.2f\n", s.averageGrade);

    return 0;
}