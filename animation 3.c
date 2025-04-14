#include <stdio.h>
#include <unistd.h>

// Function to clear the screen (works on Unix-based systems)
void clearScreen() {
    printf("\033[H\033[J");
}

int main() {
    int screenHeight = 20;
    int screenWidth = 40;
    int ballX = screenWidth / 2;
    int ballY = screenHeight / 2;
    int ballVelocityX = 1;
    int ballVelocityY = 1;

    while (1) {
        clearScreen();

        // Update ball position
        ballX += ballVelocityX;
        ballY += ballVelocityY;

        // Bounce the ball off the walls
        if (ballX <= 0 || ballX >= screenWidth - 1) {
            ballVelocityX *= -1;
        }
        if (ballY <= 0 || ballY >= screenHeight - 1) {
            ballVelocityY *= -1;
        }

        // Draw the ball with color at the current position
        for (int y = 0; y < screenHeight; y++) {
            for (int x = 0; x < screenWidth; x++) {
                if (x == ballX && y == ballY) {
                    printf("\033[31m"); // Red color
                    putchar('O');
                    printf("\033[0m");  // Reset color
                } else {
                    putchar(' ');
                }
            }
            putchar('\n');
        }

        usleep(100000);  // Sleep for 100 milliseconds (adjust for speed)
    }

    return 0;
}















/* 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to clear the screen (works on Unix-based systems)
void clearScreen() {
    printf("\033[H\033[J");
}

int main() {
    int screenHeight = 20;
    int screenWidth = 40;
    int ballX = screenWidth / 2;
    int ballY = screenHeight / 2;
    int ballVelocityX = 1;
    int ballVelocityY = 1;

    while (1) {
        clearScreen();

        // Update ball position
        ballX += ballVelocityX;
        ballY += ballVelocityY;

        // Bounce the ball off the walls
        if (ballX <= 0 || ballX >= screenWidth - 1) {
            ballVelocityX *= -1;
        }
        if (ballY <= 0 || ballY >= screenHeight - 1) {
            ballVelocityY *= -1;
        }

        // Draw the ball at the current position
        for (int y = 0; y < screenHeight; y++) {
            for (int x = 0; x < screenWidth; x++) {
                if (x == ballX && y == ballY) {
                    putchar('O');
                } else {
                    putchar(' ');
                }
            }
            putchar('\n');
        }

        usleep(100000);  // Sleep for 100 milliseconds (adjust for speed)
    }

    return 0;
}


*/















/*

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


*/














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