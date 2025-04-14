//  logical or ||  operator 
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

// logical or operator 
// if any first conditions is true then it give true means 1
// if first condition is not true then it only check second condition if second condition is true then output is true  
// if any one is true then it give true 
// of both caondion are false then it output will be false 

/*
exp 1 || exp2  ootput 
	0  ||  0		0
	1  ||  0		1
	0  ||  1		1
	1  ||  1		1
 
 */   

// if first condition is true then it give true   
// if both conditions are true then output will be true 1
// if first condition is false then it  check the second condition if second condition is true then it give output true 
#include<stdio.h>
int main(){
	int a = 10, b = 5;
    
    printf("%d\n", a < b || b == 4); // 0 because first condition is false 
    printf("%d\n", a > b || b == 4); // 1 because first condition is true 
    printf("%d\n", a < b || b < a);// 1 Because first condition is false so it check second condition and second condition is true so output is true means 1 
    printf("%d\n", a > b || b != a); // 1
    // both constions are true but if first check first condition so first condition is true so it give true output it don't check second condition 
    
//     printf("%d\n", a > b || b !< a);
// this give error because ! is used to check both sides are equal or not so if we used !and < or > so this doesn't making any science then it give error 
	return 0;
}