// bitwise operator
// we can manuplate data at bit level 
// bitwise operator used only in characters and integers
// we can't bitwise operator at float and double 
// it is used to manuplate data at bit level 
// but is a smallest unit of memory in which we can store data 
// in 1 byte there are 8 bits 
// if you want to used bitwise operator so you must have knowledge of binary numbers
// convert binary number to decimal number and decimal number to binary number 
// do all this on notebook 

/* 

&       bitwise and
|       bitwise or
^       bitwise xor
~       bitwise not or once compliment// uniary operator required only 1 operand 
<<      left shift 
>>      right shift 

*/

// solve Thai questions on you're notebook 
// you can't understand the output of code only seeing the code 
// so solve on this on copy 



// bitwise left shift << operator 
// used to shift the number to left side 
// solve this on copy 
// diagrameticaly you can better understand 
#include<stdio.h>
int main(){
	int a = 10, b;
    b = a << 2; // shift number 2 bit left side 
    printf("%d\n", b); // 40 
    
    int c = 8, d;
    d = c << 3; // shift number 3 but left side 
    printf("%d", d); // 64
    
}

/*

//short trick for left shift 
int a = 10 , b;
b = a << 2;
// formula =  10 * (2) ki power 2
// output = 40 

int a = 40 , b;
b = a << 3;
// formula =  40 * (2) ki power 3
output = 320 

*/