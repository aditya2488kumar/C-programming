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

	int a = 18, b = 9, c, d, e = 10;
    c = b++;  d = b;
    // associativity is left to right so left side value is evaluated first 
    printf("%d\n", a < b < c < d); // 0
    printf("%d\n", b == e); // 1
    printf("%d\n", c + 1 > e); // 0
    printf("%d\n", a + b == b > e < c + d); // 0 // in this we check precidence arthimatic operator > relational operators 
            // 27 == 10 > 10 < 19
    printf("%d", a != b ); // give true 1 because 18 is not equal to 10

	return 0;
    
}
