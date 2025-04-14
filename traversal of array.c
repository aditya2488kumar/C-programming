// traversal of array 
// traversal means visting every element of array at once 
// in simple printing all the elements of array


#include <stdio.h>
int main() {

    int arr[10], i, size;
    printf("\nenter the size of array : ");
    scanf("%d", &size);
    
    printf("\n");

    for(i = 0; i < size; i++) { // input array element from user 
        printf("enter the element of array : ");
        scanf("%d", &arr[i]);
    }

    printf("\ntraversal of array is\n\n");

    for(i = 0; i < size; i++) { // printing all the elements of array
        printf("array element is : %d\n", arr[i]);
    }

    return 0;
}