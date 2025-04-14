// function 
#include<stdio.h>
void sum(); // function prototype

int main(){ // function calling 
    sum();
    printf("hello\n");
    sum();
    printf("how are you\n");
    sum();
}

void sum(){ // function declaration 
    int num1, num2, sum;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("sum = %d\n", sum);
}