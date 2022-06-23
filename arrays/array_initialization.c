#include <stdio.h>
int main()
{
    // initializing an array
    // syntax --> data_type array_name[array_size];  (initialization + memory allocation)
    // declaration --> int arr[5]={1,2,3,4,5};
    int age[] = {1, 2, 3, 4, 5};
    // printing the age array
    printf("The array is :\n");
    int size = sizeof(age)/sizeof(age[0]);

    for (int i = 0; i <size; i++)
    {
        printf("%d ",age[i]);
    }

    return 0;
}