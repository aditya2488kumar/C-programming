
// nested while loop 
#include<stdio.h>
int main(){
	int i = 0, j = 1;
    
    while(i < 3){
    	while(j <= 3){
        	printf(" %d ", j++);
        }
        printf(" %d ", i++);
    }
    /*
    
    while(i < 3){
    	while(j <= 3){ 
        
        // not printing any thing 
        //	printf("hi"); // become infinite loop
        }
    }
    printf("x = %d y = %d", ++i, ++j);
    
    */
    
}