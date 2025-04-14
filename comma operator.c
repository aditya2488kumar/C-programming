// special or misleanus operator
/* 

,         comma operator 
sizeof
* &       pointer operator 
.->       member election operator 

*/

// copy pe sbb likha hai you can better understand from that 
// comma operator 
// comma operator is used to seperate 2 things
// but sometimes it act as a operator

// it is binary operator so it required 2 operand 
// it has least precidence
// associativity - left to right 

// at a time of declaration and funtion calling etc etc it act as as separator 
#include<stdio.h>
int main(){
//int a;
//a = 5,6; //pritn 5
// a = (5,6) pritn 6
//int a=5,6; // error
//printf("%d",a);
//int a;
/*
a=(printf(" Aditya "),5,7); // Aditya 5
printf("%d", a);
*/

/*
//a=(printf(" Aditya "),5,7); // Aditya 7
printf("%d", a);
*/


int a=10,b;
//b=(a++ , ++a);// print 12
b = a++,a++; // b = 10 
printf("%d\n",b); // b = 10
printf("%d",a); // a = 12




}
    




