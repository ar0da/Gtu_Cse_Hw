#include <stdio.h>
//Simple Calculator
int main()
{
    int num1=0;
    int num2=0;
    int operator=0;
    int result=0;

//Get two Integers
 printf("Please enter 2 numbers\n");
 printf("First number:");
 scanf("%d",&num1);
 printf("Second number:");
 scanf("%d",&num2);

//Operator Menu
printf("Please choose your operator:\n");
printf("1 for Addition\n");
printf("2 for Subtraction\n");
printf("3 for MUltiplication\n");
printf("4 for Division\n");
scanf("%d",&operator);

//Check for Invalid Inputs
while (operator<1 || operator>4)
{
    printf("Invalid option. Please choose a number between 1 and 4\n");
    printf("Choose again:");
    scanf("%d",&operator);
}

//Do The Math
switch (operator)
{
case 1 :
    result = num1 + num2;
    printf("Your result is :%d\n",result);
    break;
case 2 :
    result = num1 - num2;
    printf("Your result is :%d\n",result);
    break;
case 3 :
    result = num1 * num2;
    printf("Your result is :%d\n",result);
    break;
case 4 :
    if (num2 == 0){
    printf("Error: Division by zero is not allowed\n");
    break;
    }
    result = num1 / num2;
    printf("Your result is : %d \n",result);
    break;
}

return 0;
}