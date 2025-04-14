// nested if else 

// within if if we want to use another if so it is called nested if 
// if we want to check multiple condition so we use nested if 
// if we want to check 2 conditio at once that time we used nested if or we used logical && and operators 
// if we use of else so if we write ; semicolon after if so it give error because we can't used else without if 
// you know all the thing 
// try on your copy new new program 
#include<stdio.h>
int main(){
	int age , salary;
    printf("enter the age and salary : ");
    scanf("%d %d", &age , &salary);
    
    if(age > 50){
    	if(salary < 60000){
        	salary = salary +10000;
            printf("salary = %d\n", salary);
        }
        else{
        	salary = salary + 5000;
            printf("salary = %d\n", salary);
        }
    }
    else{
    	salary = salary + 3000;
        printf("salary = %d\n", salary); 
    }

/* 

	int a , b, c;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of  : ");
    scanf("%d", &b);
    printf("enter the value of c : ");
    scanf("%d", &c);
    
    if(a > b && a > c){
    	printf("a is greater then b and c");
    }
    
    if(b > a && b > c){
    	printf("b is greater then a and c");
    }
    
    if(c > a && c > b){
    	printf("c is greater then a and b");
    }
    
*/    
    
    
 /*
 
    if(a > b){
    	if(a > c){
        	printf("a is greater then a and b ");
        }
    }
    
    if(b > a){
    	if(b > c){
        	printf("b is greater then a and c ");
        }
    }
    
    if(c > a){
    	if(c > b){
        	printf("c is greater then a and b ");
        }
    }
    
*/    
    
    printf("hi handsome");
    
}