// assignment operator
// it is used to assign a valueto a variable
// associativity     right    to.  left 
// means right sigde value is calculated first 
// L.H.S     R.H.S
// a     =   10;
// L.H.S must be a only variable 
//R.H.S is expression., number or variable
#include<stdio.h>
int main(){
	int a, b, c, d;
    /*
    a = b = c = d = 10;
    first 10 is assign to d and then 10 is assign to c and then 10 is assign to b and 10 is assign to a 
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d", d);
    */
    
    a = (b = (c = (d = 10) ) );
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d", d);
    
} 