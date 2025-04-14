// macro with string 
// we also print print string with the help of macro .
#include<stdio.h>

#define MSG "jenny mam is awesome" // MSG is constant of jenny mam is awesome whenever we used MSG in program it replaced with jenny mam is awesome 
// it is like string 
int main (){
/*
    for(int i =0; i<5; i++){
    	printf("%s\n", MSG);
    }
*/    
    printf("%s", MSG); // it print jenny mam is awesome 
    
	return 0;
    
}










/*

// #define or macro in c
// macro is not terminated with  ;  semicolon 
// with the help of these macros code readability is increased 
// we can #define macros for  variable and funtion etc etc 
// it is used to give a single or small name to a large constant names examole #define S sumerainghrajput  // whenever we used S it is replaced with sumerainghrajput 
#include<stdio.h>

#define A 10 // A is constant of 10 whenever we used A in program it replaced with 10
#define PI 3.14 // PI is constant of 3.14
int main (){

    int x = A;
    printf("x = %d\n", x );
    
    float r = 2;
    printf("are of circle is %g", PI * r * r);
	return 0;
    
}

*/