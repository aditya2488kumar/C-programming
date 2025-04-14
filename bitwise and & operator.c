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

/* 

//        output
0     0     0
0     1     0
1     0.    0
1     1.    1 

*/

// bitwise & operator 
#include<stdio.h>
int main(){
	int a = 10, b = 5;
  //  a & b;
    printf("%d\n", a & b); // 0 
    // first a is converted into binary number 
    // and then b is converted in binary number 
    // then Operator & is working 
    // then it give result
    // // then result is converted into binary number 
    // then binary number is converted into decimal 
    // then it give output 
    
    int c = 11, d = 15;
    printf("%d", c & d); // 11
}