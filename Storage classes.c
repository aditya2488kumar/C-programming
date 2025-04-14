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