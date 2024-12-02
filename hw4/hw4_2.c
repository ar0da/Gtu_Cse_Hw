#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
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
    }

    
    return 0;

    
}

