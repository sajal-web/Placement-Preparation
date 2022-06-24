#include <stdio.h>
// let's put the logic of the bubble sort
void bubbleSort(int array[], int size)
{
    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter++;
    }
}
int main()
{
    // take the size of the array from user
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    // now let's take the input of the elements..
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    // now let's print the array which was inputted by the user
    for (int i = 0; i < size; i++)
    {
        printf("%d      ", array[i]);
    }
    // here is the bubble sorting function
    bubbleSort(array, size);
    printf("\nAfter bubble sort the array is \n: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d      ", array[i]);
    }

    return 0;
}