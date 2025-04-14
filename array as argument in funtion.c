//passing array as an argument 
#include<stdio.h>
//funtion declaration
int avg(int[], int);// array and value

void main(){
    int average;// to store return value
    int marks[]={10, 15, 20, 30, 45};
    average = avg(marks, 5);// funtion funtion
    printf("average is %d", average);
}

// funtion defination
int avg(int marks[], int a){
    int i, sum = 0, average = 0;
    for(i=0; i<a; i++){
        sum = sum + marks[i];
    }
    average = sum/a;
    return average ;
}





/*
// gate question 4 on funtion 
// call by value and with call by reference
#include<stdio.h>
// funtion defination
void f(int *p, int m){
    m = m + 5;
    *p = *p + m;
    return ; // or don't write return 
}
// funtion calling
void main (){
    int i=5, j=10;
    f(&i, j); // i is call by reference and j is call by value 
    printf(" %d ", i+j);

}
*/



/*

// gate question 3
// it is little bit tricky and logical question
// so please solve it on your copy then you understand this problem 
#include<stdio.h>
// funtion defination 
int r(){
    static int num=7;
    return num--; //post increment first return original value then decriment 
}
// funtion calling 
int main (){
    for(r(); r(); r()){
        printf(" %d ", r());
    }
    return 0;
}
*/



/*
// gate question 2 on funtion 
#include<stdio.h>
// funtion declaration 
int incr(int);
// funtion calling
int main (){
   int i, j;
   for(i=0; i<=4; i++){
       j = incr(i); // calling incr and j is storing return value 
   }
printf("value of j = %d", j);
}

//funtion defination 
int incr(int i){
// static means the lifetime of count is through out the program 
    static int count=0;
    count = count + i;
    return (count);
}
*/


// both questions are same uper wale mai Maine funtion declar kiya hia 
// niche Wale funtion declare nhi kiya hai 
// dono mai se ek ko comment out karke run karna hai 

/*
// gate question 2 on funtion 
#include<stdio.h>
// funtion defination 
int incr(int i){
// static means the lifetime of count is through out the program 
    static int count=0;
    count = count + i;
    return (count);
}
// funtion calling
main (){
   int i, j;
   for(i=0; i<=4; i++){
       j = incr(i); // calling incr and j is storing return value 
   }
printf("value of j = %d", j);
}
//printf("value of j = %d", j);
*/



/*
// gate question on funtion 1 mark question
// no need to declare funtion if we define funtion first 
#include<stdio.h>
// funtion defination
int jumble(int x, int y){
    x = 2*x+y;
    return x;
}
// funtion calling 
int main(){
    int x=2, y=5;
    y = jumble(y,x); // calling jumble // y used to store return value
    x = jumble(y,x); // calling jumble // y used to store return value
    printf("value is %d", x);
    return 0;
}
*/




/*
// with argument and with return type 
#include<stdio.h>
// funtion declaration
int sum(int a, int b); // 

// funtion calling
void main(){
    int a, b;
    int value =0; // storing return value 
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter first number : ");
    scanf("%d", &b);
    
    value = sum(a,b); // calling with arguments
    printf("value is = %d", value); 
}

// funtion defination
int sum(int x, int y){
    if(x>y){
        return x;
    } 
    else {
        return y;
    }
    
    // with return type 
} 
*/



/*
// with argument and with return type 
#include<stdio.h>
// funtion declaration
int sum(int a, int b); // 

// funtion calling
void main(){
    int a, b;
    int value =0; // storing return value 
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter first number : ");
    scanf("%d", &b);
    
    value = sum(a,b); // calling with arguments
    printf("value is = %d", value); 
}

// funtion defination
int sum(int x, int y){
    int number=0;
    number = x+y;
   // return  number;
    return (x+y);
    
    // with return type 
} 
*/





/*
// with argument and without return type 
#include<stdio.h>
// funtion declaration
void sum(float a, float b); // 

// funtion calling
void main(){
    float a, b;
    printf("enter first number : ");
    scanf("%f", &a);
    printf("enter first number : ");
    scanf("%f", &b);
    
    sum(a,b); // calling with arguments 
}

// funtion defination
void sum(float x, float y){
    float number=0;
    number = x+y;
    printf("float value is %f", number); 
    // without return type 
} 
*/






/*
// no argument and with return type 
#include<stdio.h>
// funtion declaration
int sum(); // or void sum(void)

// funtion calling
void main(){
    int number; // variable to store return value 
    number = sum(); // no argument 
    printf("number = %d", number);
}

// funtion defination
int sum(){
    int a=12, b=15, sum=0;
    sum = a+b;
    //return sum; // with return 
   //return a+b; // with return 
    //return sum,a; // it return a
    return sum,a,b; // it return b
} 
*/





/*
// not argument and without return type 
#include<stdio.h>
// funtion declaration
void sum(); // or void sum(void)
void multiply(); // or void multiply (void)
void substract(); // or void substract(void)
void divide(); // or void divide(void)

// funtion calling
void main(){
    sum();// no argument 
    printf("hi\n");
    multiply(); // no argument 
    printf("how are you\n");
    substract(); // no argument 
    printf("khush rho\n");
    divide(); // no argument 
}

// funtion defination
void sum(){
    int a=12, b=15, sum=0;
    sum = a+b;
    printf("sum = %d\n" , sum);
    // without return 
} 
// funtion defination
void multiply(){
    int a=12, b=15, multiplication=0;
    multiplication = a*b;
    printf("multiplication = %d\n" , multiplication);
    // without return 
}
// funtion defination
void substract(){
    int a=12, b=15, substraction=0;
    substraction = a-b;
    printf("substraction of a-b = %d\n" , substraction);
    // without return 
}
// funtion defination
void divide(){
    int a=122, b=2, divide=0;
    divide = a/b;
    printf("divide of a/b = %d\n" , divide);
    // without return 
}
*/



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

    