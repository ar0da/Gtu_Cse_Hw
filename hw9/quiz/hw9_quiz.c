#include <stdio.h>
#include <string.h>

int main()
{
    // Tüm verileri aynı dizide string olarak saklama
    const char *students[10][5] = {
        {"Ahmet", "Yilmaz", "1", "CS101", "85"},
        {"Ayse", "Demir", "1002", "CS102", "90"},
        {"Mehmet", "Kara", "1003", "CS103", "99"},
        {"Fatma", "Celik", "1004", "CS104", "88"},
        {"Ali", "Ozturk", "1005", "CS105", "92"},
        {"Elif", "Sahin", "1006", "CS106", "81"},
        {"Hasan", "Koc", "1007", "CS107", "75"},
        {"Zeynep", "Polat", "1008", "CS108", "89"},
        {"Burak", "Gunes", "1009", "CS109", "95"},
        {"Merve", "Aydin", "1010", "CS110", "87"}};

    char select;
    printf("A: Print all students\n");
    printf("B) Find a row by student id  \n");
    printf("C) Find the row with highest grade by course ID \n");
    printf("D) Find the number of students who take the course by course ID \n");
    printf("E: For Exit\n");

    while (1)
    {
        printf("secim yapiniz:");
        scanf(" %c", &select);
        if (select == 'E')
        {
            printf("Exiting...");
            break;
        }

        switch (select)
        {
        case 'A':
            for (int i = 0; i < 10; i++)
            {
                printf("%s %s %s %s %s\n", students[i][0], students[i][1], students[i][2], students[i][3], students[i][4]);
            }

            break;
        case 'B':
        {
            char StudentId[50];

            printf("Enter a student id: ");
            scanf("%s", StudentId); // Kullanıcıdan ders kodunu al

            int found = 0;
            for (int i = 0; i < 10; i++)
            {
                if (strcmp(StudentId, students[i][2]) == 0)
                {
                    found = 1;
                    for (int j = 0; j < 5; j++)
                    {
                        printf("%s ", students[i][j]);
                    }
                    printf("\n");
                }
            }

            if (!found)
            {
                printf("Invalid student id.\n");
            }

            break;
        }
        break;

        case 'C':
        {
            char CourseId[50];
            printf("Enter a course id: ");
            scanf("%s", CourseId);

            int found = 0;
            int highgrade = 0;

            for (int i = 0; i < 10; i++)
            {
                if (strcmp(CourseId, students[i][3]) == 0)
                {
                    found = 1;
                    int grade;
                    sscanf(students[i][4], "%d", &grade); // String'i tamsayıya çevirir
                    if (grade > highgrade)
                    {
                        highgrade = grade;
                    }
                }
            }

            if (found)
            {
                printf("Highest grade for course %s is: %d\n", CourseId, highgrade);
            }
            else
            {
                printf("Invalid course id.\n");
            }

            break;
        }

        case 'D':
        {
            char CourseId[50];
            printf("Enter a course id: ");
            scanf("%s", CourseId);

            int count = 0; // Öğrenci sayısı
            for (int i = 0; i < 10; i++)
            {
                if (strcmp(CourseId, students[i][3]) == 0)
                {
                    count++;
                }
            }

            if (count > 0)
            {
                printf("Number of students taking course %s: %d\n", CourseId, count);
            }
            else
            {
                printf("Invalid course id.\n");
            }
            break;
        }

        default:
            printf("Invalid option, please try again");
            break;
        }
        printf("A: Print all students\n");
        printf("B) Find a row by student id  \n");
        printf("C) Find the row with highest grade by course ID \n");
        printf("D) Find the number of students who take the course by course ID \n");
        printf("E: For Exit\n");
    }
    return 0;
}