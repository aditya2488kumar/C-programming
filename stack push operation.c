// stack push

#include<stdio.h>

#define stacksize 5
int stack[stacksize];
int top = -1;

void push( ) {

    int i;
    while (i <= stacksize-1) {

        int data;
        printf("enter the data : ");
        scanf("%d", &data);

        if (top == stacksize-1)
            printf("stack is full overflow");
        else {
            top++; // top is equal to zero means ist position
            stack[top] = data;
            printf("%d is pushed in the stack", data);
        }
        printf("\n");

        i++;
        
    }

}

void main() {

    push();

}