#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i;
    int screen_width = 80;  // Adjust this for your screen width
    int position = 0;

    while (1) {
        system("clear");  // Clear the console (for Unix-based systems)
        
        // Print spaces to move the character
        for (i = 0; i < position; i++) {
            printf(" ");
        }
        
        // Print the character
        printf("O\n");
        
        position++;
        
        if (position >= screen_width) {
            position = 0;  // Reset position when it reaches the end
        }
        
        usleep(100000);  // Sleep for 100 milliseconds (adjust for speed)
    }

    return 0;
}

















/*
#include<stdio.h>
int main() {
	int    amount1;
    float  amount2;
    char   amount3;
    long   amount4;
    double amount5;
    
    if( 7 > 5) 
    {
    	printf("%d");
    }
    
    for(int i = 0; i < 5; i++) {
    	printf("%d", i);
    }
    
}

*/


/*

#include<stdio.h>
int main(){
	int value[5]={12,34,6,7,4};
    int number, count =0;
    printf("enter the number : ");
    scanf("%d", &number);
    
    for(int i =0; i < 5; i++){
    	if(value[i] == number){
        	count = count + i;
        	printf("value is present at index value = %d\n", count);
        }
        
        
    }
}

*/