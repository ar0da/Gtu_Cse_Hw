#include <stdio.h>

// Öğrenci bilgilerini tutan bir yapı tanımlanıyor
struct Student {
    long long int studentID; // Büyük öğrenci numaraları için
    char name[50];
    char surname[50];
    float gpa;
};

int main() {
    int numStudents;

    // Öğrenci sayısını kullanıcıdan alma
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Tüm öğrencilerin bilgilerini alma
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter Student ID: ");
        scanf("%lld", &students[i].studentID);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Surname: ");
        scanf("%s", students[i].surname);

        printf("Enter GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Formatlı çıktıyı göstermek
    printf("\nStudent Information:\n");
    printf("-----------------------------------------------------\n");
    printf("Student ID        Name          Surname       GPA\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%-17lld %-12s %-12s %.2f\n", students[i].studentID, students[i].name, students[i].surname, students[i].gpa);
    }

    return 0;
}
