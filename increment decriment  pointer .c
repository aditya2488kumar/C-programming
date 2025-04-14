// increment and decrimwnt in pointer
#include<stdio.h>
int main() {
    int a[]= {6,2,8,4,5};
    int *p;
    p = &a[0];
    //  p =a;
    /*
    // pre decrimwnt 
    printf("%d\n", *--p);
    printf("%d\n", *p);
    */
    
    /*
    // post dicriment 
    printf("%d\n", *p--); // 6 
    printf("%d\n", *p);// garbage value 
    */
    
    /* 
    // pre increment 
    // first increment then return value 
    printf("%d\n", *++p); // 2
    printf("%d %d\n", *++p, *++p);// 8 4
    */
    
    /*
    // post increment 
    // first return original value then do ++
    printf("%d %d\n", *p++, *p++);//  6 2
    printf("%d", *p); // 8 
    */
    
    /* 
    printf("%d\n", *p);
  //  printf("%d\n", *p++); // both are same 
    printf("%d\n", *(p++));// original value return then ++
    // move to next index value 1
    printf("%d\n", *p);// output 2
    */
    
}