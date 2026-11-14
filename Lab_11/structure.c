#include <stdio.h>
#include<string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    s1.rollNo = 23;
    strcpy (s1.name, "Pravi");
    s1.marks = 88.5;

    printf("Roll Number: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
