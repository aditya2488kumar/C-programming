//question 1 on enum
#include<stdio.h>

enum xenum{c, cpp, jqva};
//enum xenum{c, cpp, jqva, xenum};
//enum xenum{xenum};

int main(){
	enum xenum var;
    printf("%d", sizeof(var));
}







/*
// enum in c 
// it is like structure
// it is work like macro
// enus is used to assign names to integral constant 
// automatically compiler will assign values from 0
// we also can assign value 
// we can only assign integer value no other data type value 
// also used in switch case 
// same member ex Aditya and one more Aditya is not allowed 
#include<stdio.h>
int main(){
	enum days{
    	monday,
    	Tuesday = 5, 
      //Tuesday = 5.6, // it give error 
    	wednesday,
    	thursday = 3, 
        friday,
        saturday,
        sunday,
    };
    
    enum days today ; // today is a variable of enum days 
    
    today = monday; // Monday value is 0
    printf("%d\n", today);
    
    today = Tuesday; // 5
    printf("%d\n", today);
    
    today = wednesday; // 6
    printf("%d\n", today);
    
    today = thursday; // 3
    printf("%d", today);
    
    return 0;
}
*/






/*
// Memory leak in c
// due to unproper use of DMA and heap 
// heap is not fixed size 
// it occurs when we don't free the pointer 
// jitne hun variables declare karte jayeneg unti space unke liye banti jayega aur hamari sari storage ek time pe aa ke khatam ho jayega 
// due to memory leak memory storage khatam ho jati hai 
// cpu performance bhi khatam ho jati hai 
// don't run this code because 📱 hang ho jata hai 
#include<stdio.h>
int main(){
	int ch = 1;
    int *ptr;
    while(ch < 50){
    	printf("memory leak \n");
        ptr = (int*)malloc(40000 * sizeof(int));
        printf("for continue press 1 : ");
        scanf("%d", &ch);
    //    free(ptr); // if we use ptr then memory leak is not happen 
    }
}
*/







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