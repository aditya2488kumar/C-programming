// Application of funtion pointer 
// it is alternative of switch case 
// array of funtion pointer 
#include<stdio.h>

// funtion definationss
void add(int a, int b){ 
	printf("sum = %d", a + b);
}
void sub(int a, int b){ 
	printf("substraction = %d", a - b);
}
void mult(int a, int b){ 
	printf("multiplication = %d", a * b);
}
void div(int a, int b){ 
	printf("division = %d", a / b);
}

int main(){
	int number;
    int a, b;
    void (*fptr[])(int, int) = {add, sub, mult, div};
    printf("enter your value from 0 to 3 : "); // 0,1,2,3 are index walue of array 
//  0 = sum, 1 = sub, 2 = mult, 3 = div
    scanf("%d", &number);
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);
    
    (*fptr [number])(a, b);
    return 0;
}


/*
// application of funtion pointer
#include <stdio.h>

// Function definitions
void add(int a, int b) { 
    printf("sum = %d", a + b);
}

void sub(int a, int b) { 
    printf("substraction = %d", a - b);
}

void mult(int a, int b) { 
    printf("multiplication = %d", a * b);
}

void div(int a, int b) { 
    printf("division = %d", a / b);
}

int main() {
    char character;
    int a, b;
    void (*fptr[])(int, int) = {add, sub, mult, div};
    // enter a= sum, b= sub , c = mult , d= div
    printf("enter your choice : ");
    scanf("%c", &character); // Adding a space before %c to consume leading whitespace

    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);

    int index = character - 'a'; // Convert character to integer index
    if (index >= 0 && index < 4) {
        (*fptr[index])(a, b); // Call the correct function using the index
    } else {
        printf("Invalid choice.");
    }

    return 0;
}
*/






/*
// call back funtion means passing funtion as agruument 
// passing funtion to funtion 
// application of funtion pointer 
#include<stdio.h>

void sum(int a, int b){ // a=5, b=1
	printf("sum = %d\n", a + b); // 6
}
void sub(int a, int b){ // a=5, b=1
	printf("sub = %d\n", a - b); // 4
}

void display(void(*fptr)(int, int)){ // for sum fptr = 1000, // for sub fptr = 3000
// fptr is pointer which  storing addres of funtion
	(*fptr)(5,1);
//    *fptr(5,1); // giving error 
}

void main(){
	display(sum); // suppose sum adres is 1000
    display(sub); // suppose sum adres is 3000
}
*/






/*
// funtion pointer means a pointer which storing address of any funtion 
#include<stdio.h>

// funtion prototype
int sum(int, int);

// calling
void main(){
    int s = 0;
    int (*ptr)(int, int) = &sum; // ptr is pointing to sum function and storing sum funtion address 
//  int (*ptr)(int, int) = sum; // precidence left to right
// int *ptr(int, int) = &sum; // it give error bcs 1st parwnthis are executed means pta is funtion which accept two arguments and return interger value 
    s = (*ptr)(2, 3); // calling and containg two arguments 
//  s = *ptr(2, 3); // it give error 
    printf(" %d ", s);
}

// funtion defination
int sum(int a, int b){
    return a + b;
}
*/




/*
// gate question 5
#include<stdio.h>

// funtion defination
void f(int *p, int *q){
    p = q;
    *p = 2;
}

int i = 0, j = 1; // global variables

// funtion calling
int main(){
   f(&i, &j); // calling
   printf("i = %d and j = %d", i, j);
   
   return 0;
}
*/


/*
//returning pointer from a function
#include<stdio.h>

//funtion declaration
int *returnpointer(int[]);

// funtion calling 
void main(){
    int *p;
    int a[] = {1,2,3,4,5};
    /*
    a = a + 2; // it give error because it is constant pointer
    printf("%d\n", a); // we can't increment or decriment
    */
    
    /*
    p = returnpointer(a); // calling with argument
	printf("pointer value is %d", *p);
}

/*
// funtion calling 
void main(){
    int *p;
    int a[] = {1,2,3,4,5};
    p = returnpointer(a); // calling with argument
	printf("pointer value is %d", *p);
}
*/

/*
// funtion defination
int *returnpointer(int a[]){ // a[] compiler interpreting this as a pointer 
   a = a + 2;
   return a; // it print 3
}
*/


/*
// returning string from a function
#include<stdio.h>
// funtion declaration
char* display();
//funtion calling
void main(){
   char* str;
    str = display(); // calling and storing return value
    printf("string is %s\n", str);
    /*
    str[0] = 'a';
    printf("%s", str);
    */
    
 /*   
}


//funtion defination

/*
char* display(){
    char* str[] = "jenny";
	return str; 
    //  it give error 
}
*/

/*
char* display(){
    static char str[] = "jenny";
	return str; 
    //  it print string is jenny
    // in this we can modify our strings 
}
*/

/*

char* display(){
	char str[] = "jenny";
	return str; 
    // now it is local so it print garbage value 
    // it print garbage value = string is  -_?:"_-@+&
}
*/

/*
char* display(){
	return "jenny"; 
    // it print string is jenny
    // and we can't modify string means we can't change character of strings
}
*/





/*
#include<stdio.h>

// Function declaration
void modify(char[], char[]);

int main() {
    char str1[] = "jenny";
    char str2[] = "khatri";
    modify(str1, str2);
    return 0;
}

// Function definition
void modify(char str1[], char str2[]) {
    int i, length = 0;
    for (i = 0; str1[i] != '\0'; i++) {
        length = length + 1;
    }
    printf("Length is %d\n", length);
    str2[1] = 'K';
    printf("Both strings are %s %s\n", str1, str2);
}
*/


/*
//passing string as an argument 
#include<stdio.h>

//funtion declaration
void modify( char[], char[] );// character areay and value

void main(){
    char str1[] = "jenny";
    char str2[] = "khatrii";
    modify(str1,str2); // calling 
}

// funtion defination
void modify (char str1[], char str2[]){
    int i, lenth = 0;
    for(i=0; str1[i] != '\0' && str2[i] != '\0'; i++){ // it's take shorter string length 
        lenth = lenth + 1;
    }
    printf("lenth is %d\n", lenth);
    str2[1] = 'K'; // K khatri
    printf("both string are %s %s", str1,str2);
}
*/





/*
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
*/




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

    