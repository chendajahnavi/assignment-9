#include <stdio.h>

#define MAX_SIZE 100    

//Function declarations
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);

//Driver code
int main()
{
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array 1 : ", size);
    inputArray(arr1, size);

    printf("Enter %d elements in array 2 : ", size);
    inputArray(arr2, size);

    printf("\n\nArray 1 before swapping: ");
    printArray(arr1, size);

    printf("\nArray 2 before swapping: ");
    printArray(arr2, size);

    swapArray(arr1, arr2, size);

    printf("\n\nArray 1 after swapping: ");
    printArray(arr1, size);

    printf("\nArray 2 after swapping: ");
    printArray(arr2, size);

    
    return 0;
}

//Scan elements
void inputArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));

    while(arr <= arrEnd)
        scanf("%d", arr++);
}

//Print elements
void printArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));

    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}



//Function to swap arrays
void swapArray(int * sourceArr, int * destArr, int size)
{
    int * sourceArrEnd = (sourceArr + (size - 1));

    int * destArrEnd   = (destArr + (size - 1));

    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        sourceArr++;

        destArr++;
    }
}