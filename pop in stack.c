// stack pop

#include<stdio.h>

#define stacksize 5
int stack[stacksize];
int top = -1;

void push( ) {

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

}

void pop( ) {
    int item;
    if (top == -1)
        printf("stack is empty");
    else {
        item = stack[top];
        top--;
        printf("poped item is %d", item);
    }    
}

void main() {

    push();
    pop();

} 