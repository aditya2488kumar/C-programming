// storage classes gate question 2
// solve this question on copy 
#include<stdio.h>
int fun(){
	static int num = 16;
    return num--;
}

int main(){

// 0 = false value , when 0 value is come then it come out of loop
// other value = true if value is different from 0 then again it enter in for loop 
              // 15,12,9,6,3,0 
    for(fun(); fun(); fun()){
       //16            // 13,10,7,4,1   
    	printf(" %d ", fun());
                     // 14,11,8,5,2
    }
}

// output = 14 11 8 5 2







/*
// storage class question 1
#include<stdio.h>
 int a ; 
// you think that it is int a and it take auto storage class but this is wrong 
// because in auto storage class we can't declar global variables 
//still int a is global variables and all global variables are come in extern storage class
// int a take extern storage class 
int main(){
	printf("a = %d", a); // 0
    return 0;
}
*/









/*
// extern storage class
// it is little bit tricky or confusing so learn this from notebook 
// note book pe dekh le bahut jyada important points likhe hai 
// sare points likhna possible nhi hai 
// for extern int x;
// default value = 0
// location = RAM
// scope = global we can use any where in program 
// lifetime = till end of the program 
// all global variables are come in extern storage class
// extern is used for functions and variable 
// extern is used when we want to access a variable from another file 
// if want to excesss extern x variable so x variable it should be globle definiaion
// // extern int x;  means x is defined in somewhere in program or in some another file 
// if we want to use extern between two files so both files are under the same project 
// and if we want to link two file so use #include"filename.c"    filename means jo bhi file ka name hai use double quotes mai likhna hai  
#include<stdio.h>
void fun1();
void fun2();
//int a = 49;
int main(){
     extern a; // this give 45 extern means a is define in  somewhere in program
 // if I don't use or write extern a then int a = 45 give error    
	printf("a = %d\n", a);
    fun1();
    fun2();
    
    return 0;
}

void fun1(){
	int b = 2; b++;
    printf("b = %d\n", b);
}

void fun2(){
	printf("hello world");
}
int a = 45;
*/





/*
// static storage class question
#include<stdio.h>
void display();
void main(){
	int i;
    for(i = 0; i<1; i++){
    	display();
    }
}

void display(){
	static int x; 
    x = 5;
    int y = 5;
    // x++ or ++x giving same output find out why giving same output 
//    x++; // 5+1 = 6 
//    y++; // 5+1 = 6
	++x; // 1+5 = 6
    ++y; // 1+5 = 6
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
*/







/*
// static storage class
// static means it retains the previous value 
// static int x;
// default value = 0;
// location = in RAM 
// scope = within block 
// life time = throughout the program
// we can declare global or program scope variables also 

#include<stdio.h>
void display();
static int a = 24; // global or program declaration // you can use anywhere in program 

void main(){
	printf("a = %d\n", a);
	display();
    display();	
//    printf("%d", x); // give error because x scope only in the block 
}

void display(){
	static int x; 
    x = x + 10;// first iteration 0+10 = 10  second iteration 10+10 = 20
    printf("x = %d\n", x);
    printf("a = %d\n", a);
}
*/







/*
// register storage class
// noteebook everything thing and important points are written so please check out your notebook
// if we don't write register the compiler automatically take auto and it stor in auto storage classe
// by the use of register storage classes program efficiency is increased and it decrease in running time 
// for register int x;
// default value = garbage
// scope = block / or funtion / method scope 
// lefettime = within block or till end of program
//location = cpu register 
// we declare program or global scope variable while using register
// register are present in cpu or processor
// use = when we want to story frequently used variables like loops variables or local variablea
// it is not sure that variablea are store in register storage class it depends on many factors , if register is free then is store 
// if variables are not store in register storeage class then compiler automatically take auto and store in auto storage class
// we can't use pointers along with registers 
#include<stdio.h>

//register int x = 50; // this give error because we can't declar like this if we use register storage classes 

int main(){
 //   register int *ptr,i; // we can't use pointer while using register storage class
 //   ptr = &i; //give error 
 	
 
    register int i, sum = 0; // by the use of register storage class program efficiency is increased 
    for(i =0; i<11; i++){
    	sum = sum + i;
    printf("%d\n", sum);    
    }
    printf("%d", sum);
    
    return 0;
}
*/









/*
// auto storage class 
// if we not use auto or if we don't write auto compiler automatically take auto storage class
// default value = 0
// scope = block or funtion
// lifetime = within block 
// location = stack or main // local variable are store in stack 
// if we use auto we can't declare program or global scope variables 
#include<stdio.h>

//auto int x = 50; // this give error because we can't declar like this if we use auto storage classes 

int main(){
	auto int x = 10;
    {
    	auto int x;
        printf("%d\n", x); // give 0 or garbage value 
    }
    printf("%d\n", x); // 10
    
    return 0;
}
*/
 







/*
// storage classes 
// funtion scope / program or global scope / block scope 
// 4 types of storage classes are auto / register / extern / static 
// study from notebook 
#include<stdio.h>
void name();
int a = 70; // program scope 

int main(){
	name();
	printf("%d\n", a); // 70 it take program scope value
    
	int a = 10; // scope within main 
    
    {
    	int a = 20; // scope only in this block 
        printf("inside the bloack %d\n", a); // 20
    }
    
    {
    	printf("%d\n",a++); // 10 // main 
    }
    
    	printf("%d\n",a); // 11 // main
    
    return 0;
}

void name(){
	int c = 30; // funtion scope 
    printf("%d\n", c); // 30 
}
*/