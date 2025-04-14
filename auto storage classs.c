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