// dynamic allocation of memory using malloc 
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, *ptr;
    printf("enter total number of values : "); // jitni values hum likhenge utni space ye stack mai reserve kar legaa 
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // dynamic allocation of memory from stack

    if(ptr == NULL){
    	printf("memory has not been allocated");
    }
 
    else{
    	printf("enter value : ");
    	for(i = 0; i<n; i++) {
        	scanf("%d", (ptr + i)); // ptr is storing address so TWW I don't use & operator
        }
    }
    
    printf("the entered values are : ");
    for(i = 0; i<n; i++) {
        printf(" %d ", *(ptr + i));
    }

    free(ptr); // DMA mai free karna jaruri hai 
}