// problem on Pinter 
// different cases of Pinter 
#include<stdio.h>
int main(){
    char str[]={"Aditya Kumar Prajapati"};
    char* ptr;
    ptr = str;
    printf("%c\n", *ptr);// A
    printf("%c\n", *(ptr++ +1) );// d
    printf("%c\n", *((ptr-- +5)-1)+3 );//
    printf("%c\n", *(++ptr +10)-32 ); // 
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr );
    // 
    
}



/*
#include<stdio.h>
void main (){
    char str[]= {"Aditya Kumar prajaptai"};
    char *ptr = str;
    printf("%c\n", *ptr); // A 
    //printf("%c\n", *ptr++); // A
    //printf("%c", *ptr); //d
    printf("%c\n", *(ptr++ +1));// d
    printf("%c\n", *((ptr++ +1)-1)+1); // e 
    
}
*/

/*
#include<stdio.h>
int main (){
     int a = 12;
  const int *p = &a;
     *p = 23; 
    printf("%d", *p); // error 
}
*/

/*
#include<stdio.h>
int main (){
  const  int a = 12;
    const int*p = &a;
     *p = 23; 
    // it give error because we only can read value 
    // we can't change it because we use const data type 
    printf("%d", *p); 
}
*/


/*
include<stdio.h>
int main (){
   const int a = 12;
    int*p = &a;
     *p = 23; 
    printf("%d", *p); // 23 
}
*/