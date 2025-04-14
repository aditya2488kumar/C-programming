// aritimetic operation in c or addition
#include<stdio.h>
int main (){
    int a[5]={5,1,-1,10,2};
    int *p = &a[0];
    printf("value is : %d\n", *p);// it give 0 1 -1 10 2 
    printf("address is : %u\n", p);
    
    p=p+2;
    *p = 22;
    printf("value is : %d\n", *p);
    printf("address is : %u\n", p );
    /*
    p=p+2;
    printf("value is : %d\n", *p);
    printf("address is : %u\n", p );
    
    p=p+3;
    printf("value is : %d\n", *p);
    printf("address is : %u\n", p );
    
    p=p+4;
    printf("value is : %d\n", *p);
    printf("address is : %u\n", p );
    */
} 


/* 
// aritimetic operation in c or addition
#include<stdio.h>
int main (){
    int a = 10;
    int * p = &a;
    int * q = &a; 
   // p + q;// it give error 
    p+20;
    printf("%d", *p);
   // printf("%d", *q);
    

} 
*/