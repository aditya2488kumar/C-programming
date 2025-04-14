// substraction in pointer
#include<stdio.h>
int main (){
    int a[]={2,4,3,0,-7};
    int *p = &a[0];
    int *q = &a[3];
    
    printf("q-p = %d\n", q-p);
    printf("q-p = %d\n", p-q);
    
    printf("value is %d\n", *q);
    q =q-2; 
    printf("value is %d\n", *q);
    
    p = p+2;
    printf("value is %d\n", *p);
    printf("q-p is %d\n", p-q);
    
/* 
    int a[5]={5,1,-1,10,2};
    int *p = &a[0];
    int *q = &a[4];
    int diff;
    p= p+2;
    q = q-p;
    printf(" difference is : %d", q);
    */
    
     /*
    diff = q - p;  // output 4
    printf("difference is : %d", diff);
    */
    
    /*
    diff = p - q;  // output -4
    printf("difference is : %d", diff);
    */
    
    /*
    q = q-2;
    diff = p-q;
    printf("difference is : %d", diff);
   // diff = p-q ;
    //printf("%d\n", q-p);
   // printf("%d\n", p-q);
    */
} 


/*
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
    // */
    /*
} 
*/

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