// pre define macros 
// syntax underscore underscore NAME underscore underscore 
#include<stdio.h>
int main(){
    // __DATE__ this tells about the current date 
	printf("Date : %s\n", __DATE__);
    
    // __TIME__ this tells about current time 
    printf("Time : %s\n", __TIME__);
    
    // __FILE__ this tell us about file name 
    printf("File : %s\n", __FILE__);
    
    // __LINE__ this tell us about line number 
    printf("Lile : %d\n", __LINE__);
    
    // __STDC__ it print that our c compiler is according to ANSI standard or not  it give true or false 
    // true = 1. false = 0 or other value
    printf("ANSI : %d", __STDC__);
}










/*
// #undef 
// undef is used to undefined the macro 
#include<stdio.h>
#define A 56
#define AS "Aditya Kumar"
int main(){

    #undef A // now A is undefined so we can't used A in program if we used it give error 
	int c = A;
    printf("%d\n", c);
    
    #undef AS // now AS is undefined so we can't used As in program if we used it give error 
    printf("%s", AS);
}
*/







/*
// macro with funtion 
// solve on copy first 
#include<stdio.h>
#define MUL(a,b) a*b

int main(){
	printf("%d", MUL(5-2 , 7+4)); // -5 because efirst the expression of substitution will done 
    // after that evaluation of expression is done 
    // 5-2 * 7+4 =. 5-14+4. = -5
    //
    return 0;
}
*/








/*
// macro with if else or funtion 
#include<stdio.h>
#define MAX(a,b)  if(a>b) \
                      printf("%d is maximum\n", a);\
                  else\
                      printf("%d is maximum\n", b);
                      

int main(){
	MAX(5,6); // funtion calling 
    return 0;
}

*/


/*
#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main(){
    printf("%d", MAX(50,6));
    return 0;
}
*/






/*
// macro with funtion 
#include<stdio.h>
#define MUL(a,b) a*b

int main(){
	printf("%d", MUL(2 , 4));
    return 0;
}

*/









/* 
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

/*
    printf("%s", MSG); // it print jenny mam is awesome 
    
	return 0;
/*    
}

*/








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