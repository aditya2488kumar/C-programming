// pointers value accessing 
#include<stdio.h>
int main (){
int a=10,b=20;
int *ptr;
ptr =&a;
int *qtr;
qtr =&b;
printf("value of a is %d\n", a);
printf("value of ptr is %d\n", *ptr);

// %d  and %u give integers value 
// %d give hexadecimal value eg  57gnk6dj9hh 
printf("address of a is %d\n", &a);
printf("value of b is %d\n", b);
printf("value of b is %d\n", *qtr);
printf("address of b is %d\n", &b);

}



/*
// comma operator 
#include<stdio.h>
int main(){
//int a;
//a = 5,6; //pritn 5
// a = (5,6) pritn 6
//int a=5,6; // error
//printf("%d",a);
//int a;
//a=(printf(" Aditya "),5); // Aditya 5
//a=(printf(" Aditya "),5,7); // Aditya 7
int a=10,b;
//b=(a++ , ++a);// print 12
b = a++,a++; // b = 10 
printf("%d",b);

}
*/




/*
#include<stdio.h>
#include<string.h>
void main(){
    int i;
    char name[20];
    printf("enter the name : ");
    gets(name);
    for(i=0; name[i]!='\0'; i++){
        if( name[i]>='A' && name[i]<='Z'){
            name[i]= name[i]+32;
        }
        //printf("%s",name[i]);
    } 
    printf("string is %s",name[i]);
    
}
*/

/*
// string reverse with own logic 
#include<stdio.h>
#include<string.h>
int main () {
    int digits=0, i, length;
    char name1[20],name2[20];
    printf("enter the first string : ");
    gets (name1);
    length = strlen(name1);
    printf("%d\n",length);
    
    for(i=0; i<length; i++){
        digits = name1[length-1-i];
        printf("%c", digits);
    
    }
   // 
   // printf("%c", name1[5]);
  //  printf("%c", name1[4]);
 //   printf("%c", name1[3]);
   // printf("%c", name1[2]);
 //   printf("%c", name1[1]);
 //   printf("%c", name1[0]);
   // 
    return 0;
}
*/


/*
// string reverse with library function 
#include<stdio.h>
#include<string.h>
int main () {
    int reverse, i, length;
    char name1[20],name2[20];
    printf("enter the first string : ");
    gets (name1);
    length = strlen(name1);
    printf("%d\n",length);  
  // sometimes strrev funtion is not working for reverse a 
a string it is depends upon the compiler string reverse library
function kisi kisi compiler pe hi work krega 
    reverse = strrev(name1);
    printf("%s", reverse);
    return 0;
}
*/