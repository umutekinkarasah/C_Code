#include <stdio.h>
//#define size 5 // Declaring Size of the array
void printArray(int arr[]);
void rotateByOne(int arr[]);
int main()
{
    int i, num, size;

    printf("Enter elements number : ");
    scanf("%d", & size);

    int arr[size];

    printf("Enter elements array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &num);
    // Actual rotation
    num = num % size;
    // Printing array before rotation
    printf("Array before rotation");
    printArray(arr);
    // Rotate array n times
    for(i=1; i<=num; i++)
    {
        rotateByOne(arr);
    }
    // Printing array after rotation
    printf("\n\nArray after rotation\n");
    printArray(arr);
    return 0;
}
void rotateByOne(int arr[])
{
    int i, last, size;
    // Storing last element of array
    last = arr[size - 1];
    for(i=size-1; i>0; i--)
    {
        // Moving each array element to its right
        arr[i] = arr[i - 1];
    }
   // Copying last element of array to first
    arr[0] = last;
}
//Printing the given array
void printArray(int arr[])
{
    int i, size;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
