// not argument and without return type 
#include<stdio.h>
// funtion declaration
void sum();
void multiply();
void substract();
void divide();

// funtion calling
void main(){
    sum();
    printf("hi\n");
    multiply();
    printf("how are you\n");
    substract();
    printf("khush rho\n");
    divide();
}

// funtion defination
void sum(){
    int a=12, b=15, sum=0;
    sum = a+b;
    printf("sum = %d\n" , sum);
} 

void multiply(){
    int a=12, b=15, multiplication=0;
    multiplication = a*b;
    printf("multiplication = %d\n" , multiplication);
}

void substract(){
    int a=12, b=15, substraction=0;
    substraction = a-b;
    printf("substraction of a-b = %d\n" , substraction);
}

void divide(){
    int a=122, b=2, divide=0;
    divide = a/b;
    printf("divide of a/b = %d\n" , divide);
}



/*
// call by value 
#include<stdio.h>
// parameters 
void fun(int a , int b); // function declaration
int main (){ 
    int x =10, y=20;
    fun(x,y); // actual parameters
    printf(" x = %d and y = %d", x ,y);

}
void fun(int x, int y){
    x = 23 , y= 45;
    printf(" x = %d and y = %d", x ,y);
    
}
*/





/*
// funtion declaration and fauntion defination
// important
#include<stdio.h>
void sum(  int ,  int ); // function prototype

int main(){ // function calling 
int x=12, y=23;
    sum(x,y);
    printf("hello");

}
// funtion defination  
void sum(  a ,   b  ){
/*
    int a , b ,sum;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
*/
/*
    int sum;
    sum =a+b;
    printf("%d\n", sum);

}
*/
/*
// function declaration 


// function declaration 
#include<stdio.h>
char name(); // function prototype

int main(){ // function calling 
    
    name();
    return 0;
}

char name(){ // function defination 
    char i;
    printf("enter a character :: ");
    scanf("%c", &i);
    return i;
    
    
}
*/




/*

// function  declaration 
#include<stdio.h>
void sum(void); // function prototype

int main(){ // function calling 
    sum(3,4);// it don't sum 3 and 5 it simply call the function 
    /*
    printf("hello\n");
    sum();
    printf("how are you\n");
    sum();
    */
    
/*    
    return 0;
}

void sum(){ // function defination 
    int num1, num2, sum;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("sum = %d\n", sum);
}


*/

    