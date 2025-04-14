// dynamic allocation of memory using calloc 
// calloc allocate memory into multiple blocks
// each block have same size 
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, *ptr;
    printf("How many blocks you want to allocate  : "); // jitni values hum likhenge utni space ye stack mai reserve kar legaa 
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int)); // dynamic allocation of memory from stack and calloc take 2 arguments

    if(ptr == NULL){
    	printf("memory has not been allocated");
    }
    
     // jo bhi value hum enter krenge vo value ye print krega 
    // if we don't entered any value and if we directly print it will print 0
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
    
     
     /*
     // if we don't entered any value and if we directly print it will print 0
     printf("the entered values are : ");
    for(i = 0; i<n; i++) {
        printf(" %d ", *(ptr + i));
    }
    */
    
    free(ptr); // DMA mai free karna jaruri hai 
}







/*
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
*/