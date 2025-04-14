// priority precidence.  * / %  >. + -
// means first * / % these are evaluated  and then evaluated + -
// associativity    -   left. to right 
 
#include<stdio.h>
int main(){
   int a = 10, b = 4 , c = 3 , d = 5, e;
   e = a + b - c * d;
 // solve this on copy then you better understand  
 // in this first c * d is evaluated because * is more precidence  so  3 *5 = 15
 // next a + b and b - c is evaluated but both both have same priority precidence 
 // so we check associativity 
 // so associativity is left to right 
 // so first a + b is evaluated    // 10 + 4 = 14 
   
   
   printf("%d", e);  // -1 
    
	return 0;
}