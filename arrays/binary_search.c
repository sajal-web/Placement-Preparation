#include<stdio.h>
int binarySearching(int array[],int size,int element){
    int low = 0;
    int high = size-1;
    
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (array[mid]==element)
        {
            return mid;
        }
        if (array[mid]<element)
        {
            low = mid+1;
        }else high = mid -1;
        
        
    }
    

    return -1;
}
int main(){
    // so in this program we are going to know how to find the index position of an given element by binary search
    // let's start the program
    // at first let's take input from the user a sorting array
    int size,element;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter the %d element for the array: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    // now display the array
    printf("The elements are : \n");
    for (int j = 0; j < size; j++)
    {
        printf("%d    ",array[j]);
    }
    printf("Now enter the element : ");
    scanf("%d",&element);
    // now let's make the binary search....
    int binaryResult = binarySearching(array,size,element);  
     printf("Element %d was found at position %d",element,binaryResult);
         
    return 0;
}