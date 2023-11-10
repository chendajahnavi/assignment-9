#include <stdio.h>

//Swap function declaration
void swap(int * num1, int * num2);

//Driver code
int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Before swapping:\n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    swap(&num1, &num2);

    return 0;
}

//Function to swap two numbers
void swap(int * num1, int * num2)
{
    int temp;

    temp = *num1;

    *num1= *num2;

    *num2= temp;

    printf("After swapping:\n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}