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
    /*
    printf("%c", name1[5]);
    printf("%c", name1[4]);
    printf("%c", name1[3]);
    printf("%c", name1[2]);
    printf("%c", name1[1]);
    printf("%c", name1[0]);
    */
  
    
    return 0;
}

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