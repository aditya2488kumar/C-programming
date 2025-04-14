// relational operator or comparison operator 
// condition true then it give 1 
// condition false then it give 0
/*

<    less then
>     greater then
<=   less then equal to
>=     greater then equal to 
==     equality operator 
!=      not equal to 

*/

// we can compare integer and float and character
// but we are avoiding to compare float value with relational operators 
// if we compare character then it compare it's ASCII value 
// we can't compare string
//  <, > , <=, >= has higher precidence then == , !=
// associativity     left to right   means left side is evaluated first in expression
// arthimatic operator >> greater precidence then relational operators 
// syntax for relational operators
// Arithmetic operation 1   relational operators.   arithmetic operator 2
#include<stdio.h>
int main(){

	int a = 10,  b = 20 ;
    printf("%d\n", a > b); // 0  means false
    printf("%d\n", a < b); // 1 means true
    
    char A = 'c', B = 'b';
    printf("%d", 'c' < 'b'); // this compare ASCII value of c and b   c = 99 and b = 98 //it give  0
    
	return 0;
    
}
