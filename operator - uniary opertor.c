// operator in c
//operator is used to manuplate variable or data 
// expression is a sequence of operator and operands which give single value after processing
// example.    a = 5 + 5;
// a is variable. = + is operator.  5 5 are operandas 
//types of operators based on operands
// 1. uniary     one operand
// 2. binary     two operand
// 3. ternary    three operand

// uniary operors are (means it requires only one operand)
// -    uniary minus
// ++ , --     increment and decriment
// !         logical not  // it convert true into false and false into true 
// &          adressof. // it store addres
// sizeof     // it calculate size 
#include<stdio.h>
int main(){
	int y, a = 10;
    // a++   is  postfix
    y = a++; // first 10 is assign to y and then in a adding 1 so a become 11
    printf("y = %d\n", y); // 10
    printf("a = %d\n\n", a); // 11
    
    int c, d = 10; 
    // ++d    is.  prefix
    c = ++d; // first 10 is assign to y and then in a adding 1 so a become 11
    printf("c = %d\n", c); // 11
    printf("d = %d\n\n", d); // 11
    
    
    
	return 0;
}