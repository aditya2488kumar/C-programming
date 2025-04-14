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