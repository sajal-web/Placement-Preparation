#include<stdio.h>
int linearSearch(int array[],int size,int element){
    // so in linear search we traverse all the array and match the target element with each of the array element through a for loop
    // if match than return the index position and we got the position if don't get the position than return another
    for (int i = 0; i < size; i++)
    {
        if (array[i]==element)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
     int size,element;
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
    // now lets make the search
    printf("Using linearsearch....");
    printf("\nEnter the element you wanna know the position: ");
    scanf("%d",&element);
    int result =linearSearch(array,size,element);
    if (result == -1)
    {
        printf("Element %d was not found in the array....",element);
    }
    else 
    
   printf("The element %d is found at position %d. ",element,result); 
    // let's make binary 
    
    
    return 0;
}