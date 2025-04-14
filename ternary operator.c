// ternary operator
// it required 3 operand 
// syntax 

// expression 1 ? expression 2 : expression 3;

// if we want to use ternary operator so expression 1 must be a condition 
#include<stdio.h>
int main(){
	int a = 10, b = 15, c ;

	c = (a < b)? a: b; // a is less then b so it go to a 
    printf("%d\n", c); // 10 
    
    c = (a > b)? a: b; // a is smaller then b so it go to b 
    printf("%d", c); // 15
}