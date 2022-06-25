#include <stdio.h>
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d      ", array[i]);
    }
}
void insertionSort(int array[], int size)
{
    // Loop for passes
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        // loop for each passes
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Now enter the %d elements of the array: ", size);
    // loop for input the elements from user
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    // let's print the given array
    printArray(array, size);
    // insertionsort methode call
    insertionSort(array,size);
    // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    printf("After insertion sort performed the array is : \n");
    printArray(array,size);

    return 0;
}