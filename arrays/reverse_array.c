#include <stdio.h>
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d    ", array[i]);
    }
}

    void revarseArray(int array[], int size)
    {
        int start = 0, end = size-1;
        while (start < end)
        {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    // now let's input the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    // now print the given array
    printArray(array, size);
    // now let's try to reverse the array
    revarseArray(array,size);
    printf("After implement reverse function the array is :\n");
    printArray(array,size);
    

    return 0;
}