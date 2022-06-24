#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // now let's take input of the array from the user
    int array[size];
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &array[i]);
    }
    // print the input array
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    // now let's try to find out the min and max valu of the array
    int max = array[0];
    // now let's compare elements
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("\nThe maximum value of the elements is: %d",max);
   
    // now let's find out the value of minimum value of the array elements
    int min = array[0];
    for (int j = 0; j < size; j++)
    {
        if (array[j]<min)
        {
            min = array[j];
        }
        
    }
    printf("\nThe minimum value of the array element is : %d",min);
    

    return 0;
}