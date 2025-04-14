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



// bitwise ~ not operator 
// used to find out the once compliment of number
// this invert the bits 
// example - if original value is 0 and then after ~ this it is converted into 1
// this give negative output

// three methods to store negative number 
// 1. signed magnitude
// 2. one's compliment
// 3. two's compliment

// but there are some drawback of signed and oncs compliment method so we generally used two compliment 
// formula.  ~a = ~(a + 1)
#include<stdio.h>
int main(){
	int a = 5, b;
    b = ~a; //  ~a = ~(a + 1)      ~(5 + 1) = -6
    printf("%d\n", b); // -6
    
    int c = 28, d;
    d = ~c;  //  ~(28 + 1). // -29
    printf("%d", d); // -29
    
}

    