// compare two strings with own logic
#include<stdio.h>
int main () {
    int value,i;
    char name1[20],name2[20];
    printf("enter the first string : ");
    gets (name1);
    printf("enter the second string : ");
    gets (name2);
    for(i=0; name1[i]!='\0' || name2[i]!='\0'; i++){
        if( name1[i]!= name2[i] ){
            value=1;
            break ;
        }
    }
    if(value == 0){
    printf("same\n");
    }
    else {
    printf("not same\n");
    }
    //printf("%d", value);
    return 0;
}


/*
// compare two strings with library function 
#include<stdio.h>
#include<string.h>// string library
int main () {
    int value;
    char name1[20],name2[20];
    printf("enter the first string : ");
    gets (name1);
    printf("enter the second string : ");
    gets (name2);
    value = strcmp( name1 , name2 );
    if(value == 0){
    printf("same\n");
    }
    else {
    printf("not same\n");
    }
    printf("%d", value);
    // outputs 
    // 0 when both strings are same 
    // +ve when string1 > string2
    // -ve when left string is not equal to right string 
    return 0;
}
*/