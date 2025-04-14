#include<stdio.h>
int main(){
/*
	 int a = 10, b; 
     b = a++ , a++;
     printf("%d", b);
     char str[20]= {'"', 'h', 'e', 'l', 'l','o', 'w', 'o', 'r', 'l' , 'd','"' ,'\0'};
     
     printf(" %s ", str);
     
     printf("\"Hello World\"");
 */
     
     int a=10, b=20;
     a = a * b;
     b = a / b;
     a = a / b;
     printf("a = %d , b = %d ", a , b);
     
}


/* 
#include<stdio.h>
#include<stdlib.h>
int *display(){
	int n , i, ptr;
    
    printf("enter how many bytes you want to allocate : ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n * sizeof(int));
    
   printf("entere values  : ");
    	for(i =0; i < n; i++){
    		scanf("%d", (ptr + i));
        } 
    return ptr;
}



int main(){
	int i, n, *ptr1;
    
    ptr1 = display();
    
   // free(ptr);
    
    printf("entered values are : ");
    	for(i =0; i < n; i++){
    		printf(" %d ", *(ptr1 + i));
        }
    
   free(ptr1);
    
    return 0;

}








/*
// free( ) in c 
// it is used deallocate the memory
// it release or free the dynamically allocated memory 
// after freeing pointer we can't defreanse if we do it show undefined behaviour 
// in DMA memory has not been freed automatically
// it is responsibility to free the DMA memory 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n, *ptr;
    printf("enter how many bytes you want to allocate : ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == 0){
    	printf("memory has not been allocated");
    }
    else{
    	printf("enter the values : ");
        for(i =0; i < n; i++){
    			scanf("%d", (ptr + i));
    	}
        
        free(ptr); // if we free pointer and then we are accessing the values then it show undefined behaviour 
        // it give garbage value or correct value or zero or anything means showing undefined behaviour 
    	printf("entered values are : ");
    	for(i =0; i < n; i++){
    		printf(" %d ", *(ptr + i));
        }
    
    }
    
  //  free(ptr);
    return 0;

}
*/






/*
// Dynamic Memory allocation using realloc
// used to incerease/decrease the size of memory 
// update the size of memory without loosing previous content 
// after using malloc or calloc then you ylcan only use realloc
// if memory block of 5 bytes and if we use realloc then we can increase the bytes in 5 after increasing bytes it will 6 bytes , 7 bytes............upto you 
// if it not possible to add extra byes in previous bytes then it allocate a new memory block and copied the previous content and previous bytes is now free
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, *ptr, *ptr1;
    printf("enter how many bytes you allocate : ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n , sizeof(int));
    
    if (ptr == 0){
    	printf("memory has not been allocated");
    }
    else{
        printf("enter values : ");
    		for(i = 0; i<n; i++){
    			scanf("%d", (ptr + i));
            }
        
        printf("enter updated value of n : "); // how many bytes you want to add or reduce 
        scanf("%d", &n );   
        
        ptr1 = (int*)realloc(ptr, n * sizeof(int)); // used to pdate the size increase or decrease 
        
        printf("previous address = %d new address = %d\n", ptr, ptr1); // if both address are same then means ptr1 adding bytes in ptr 
        
        /*
        printf("entered updated value of n : ");
        for(i =0; i<n; i++){
        	scanf("%d", (ptr1 + i) );
        }
        */
 //   }
    
/*    
    printf("entered values are : ");
    for(i = 0; i<n; i++){
    	printf(" %d ", *(ptr1 + i));
    }
    
    free(ptr1);
}

*/