#include <stdio.h>
#include <string.h>
int main()
{
    char text[12] = "happynewyear";
    int count[26] = {0};  // for small case letters.

    for (int i = 0; i < strlen(text); i++) {
        count[text[i] - 'a']++;
    }
    char karakter;
    printf("enter a character:");
    scanf("%c", &karakter);
    if (karakter >= 'a' && karakter <= 'z') {
        printf("The character '%c' appears %d times in the text.\n", karakter, count[karakter - 'a']);
    } else {
        printf("Please enter a lowercase alphabet character.\n");
    }
    return 0;
   
    
}