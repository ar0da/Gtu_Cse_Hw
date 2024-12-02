#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int number1 = 0;
    int number2 = 1;
    int Length = 0;

    printf("Please enter the number of terms to display: ");
    scanf("%d", &Length);
    printf("First %d terms: ", Length);
    switch (Length)
    {
    case 0:

        break;
    case 1:
        printf("%d", number1);
        break;
    case 2:
        printf("%d, %d", number1, number2);
        break;
    default:
        printf("%d, %d, ", number1, number2);
        break;
    }


    for (int i = 2; i < Length; i++)
    {
        int number3 = number1 + number2;
        if (i == Length - 1)
        {
            printf("%d", number3); break;
        }
        printf("%d, ", number3);
        number1 = number2;
        number2 = number3;
    }
    return 0;
}
/*
int number = 0;
    printf("Pozitif bir sayi giriniz:");
    scanf("%d", &number);// get input from user
    while (number < 0) // check input wheter it is positive
    {
        printf("\nLutfen pozitif bir sayi giriniz:");
        scanf("%d", &number);
    }

    unsigned int result = 1;
    if (number <= 10) // calcute factorial
    {
        for (int i = 1; i <= number; i++)
        {

            result = result * i;
        }
        printf("Factorial of %d = %d\n", number, result);
    }
    else //calculate square
    {
        result = number * number;
        printf("Square of %d = %d\n", number, result);
    }*/

    /*int number1 = 0;
    int number2 = 1;
    int Length = 0;

    printf("Please enter the number of terms to display: ");
    scanf("%d", &Length);
    printf("First %d terms: ", Length);
    switch (Length)
    {
    case 0:

        break;
    case 1 :
        printf("%d", number1);
        break;
    case 2:
        printf("%d, %d", number1, number2);
        break;
    default:
        printf("%d, %d, ", number1, number2);
        break;
    }


    for (int i = 2; i <Length; i++)
    {
        int number3 = number1 + number2;
        if (i== Length-1)
        {
            printf("%d", number3); break;
        }
        printf("%d, ", number3);
        number1 = number2;
        number2 = number3;

    }*/
