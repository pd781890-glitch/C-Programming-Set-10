#include <stdio.h>

void displayStudent(char name[], int roll, float marks) {
    
    printf("\n    Student Details    \n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Marks: %.1f\n", marks);
}


int main() {
    
 
    char student_name[50] = "PRINCE";
    int student_roll = 86;
    float student_marks = 95.5;
    
    displayStudent(student_name, student_roll, student_marks);
    
    return 0;
}
