//  logical not !  operator 
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

// logical not operator  (uniary operator)
// it convert true into false 
// it required only 1 operand 
// it convert true into false and false i to true
// 



#include<stdio.h>
int main(){
// false means it give 0 
// if true then it give 1 
// other then 0 value it considered as true 
	int a = 10, b = 0;
    printf("%d\n", a != b);// 1
    printf("%d\n", !b); // 1 becaus b is 0 and it convert true into false and false into true
    printf("%d\n", !a ); // 0 because other then 0 it considered as true so 10 is true and it give 0 
  //  printf("%d\n", a ! b); // this give error 
    printf("%d", !(a > b)); // 0
	return 0;
}