#include<stdio.h>
void selectionShort(int array[],int size){
    printf("Let's do the selection sort:");
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j]=array[i];
                array[i]=temp;
            }
            
        }
        
    }
    // printf("After sorting using selection sort the array is : ");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d    ",&array[i]);
    // }
    
    
}
int main(){
    int size,element;
    printf("Enter the size of the arrya: ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    //  displaying input array
    for (int i = 0; i < size; i++)
    {
        printf("%d   ",array[i]);
    }
    selectionShort(array,size);
     for (int i = 0; i < size; i++)
    {
        printf("%d   ",array[i]);
    }
    return 0;
}