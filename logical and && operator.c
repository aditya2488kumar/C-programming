//  logical and &&  operator 
/*

&&    logical and.  it requires 2 operand or expression 
||    logical or.    it requires 2 operand or expression 
!     logical not   // uniary operator means it requires only 1 operand

*/

// condition true it give 1 
// condition false it give 0
// logical operator are used to check more then two condition 
// relational operators having higher precidence then logical operators
// assiativity. left to right 
// in any line of code if we use logical operators then the whole expression is called logic expression or compound relational expression

// logical and operator 
// if both conditions are true then it give true means 1
// if any one is false then it give false 

/*
exp 1 && exp2    ootput 
	0  &&  0		0
	0  &&  1		0
	1. &&. 0		0
	1. &&  1		1
 
 */   

// if first condition is true then it check the second condition     // is both conditions are true then output will be true 1
// if first condition is false then it don't check the second condition and give output false 
#include<stdio.h>
int main(){
	int a = 10, b = 5;
    
    printf("%d\n\n", a == b  &&  b < a); // 0 == 1 // it give 1 
    
    printf("%d\n\n", a > b  &&  b != 10 && b < 11 && a > 5); // it print 1 all conditions are true 
            //  10 > 5  &&. 5 != 10 && 5 < 11 && 10 > 5
 // output. //.    1.    &&    1     &&  1    &&   1
 
 
    int c = 20, d = 40;
    printf("%d\n", c == d && c < d);// 0
                // 40==20 && 20 < 40
                  //. 0   &&   // 1 //output 0
    printf("%d", c != d && c < d);// 1
               //20 != 40 && 20 < 40
                //.   1  && 1 // output 1 
}