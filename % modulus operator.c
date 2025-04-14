// Assignment operator 
// %. modulus operator 
//.  % (modulus)operator it give remainder
// if we used float variables so we can't used % operator
// int a; and float b; at this time also we can't used % operator 

#include<stdio.h>
int main(){
  int a = 10, b = 7;
//	float a = 10.5,  b = 7.5; // 
  //    int a = 10; float b = 7.5;


    
// whatever sign of first operand that is print in output 
//   int a = -10, b = 7; // it print -3
   
   // -10 % 7 = -7 sign of first operand is - so output is -value
//   int a = 10, b = -7; // it print 3
   // 10 % -7 = 3 // first operand is + sign so output must be positive value 
   
    printf("a % b = %d\n", a % b); 
        
    
    
	return 0;
}