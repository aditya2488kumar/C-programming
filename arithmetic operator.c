// Arithmetic operator 
// + ,- , * , /, %
//  / divide operator 
//.  % operator it give remainder
#include<stdio.h>
int main(){
	int a = 10,  b = 7;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // 10/7 then it give 1.4 but it print 1 because we using %d format specifier 
    printf("a % b = %d\n", a % b); // 3 because 3 is remainder 
     
        
    
    
	return 0;
}