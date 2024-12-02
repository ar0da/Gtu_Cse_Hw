#include <stdio.h>

int main()
{
int num=0;  
int result =0;  
printf("Enter a positive number: ");
scanf("%d",&num);
while (num<=0)
{
    printf("Please enter a positive number\n");
    scanf("%d",&num);
}
for (int i = 1; i <= num; i++)
{
    if (i%2==1)
    {
        result= result+i;
    }
    
}
printf("The sum of odd numbers from 1 to %d is %d\n",num, result);


}