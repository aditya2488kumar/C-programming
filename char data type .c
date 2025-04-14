// char data types
// two type of char are
// signed char  - 128 to 127.
// unsigned char 0 to 255
// if we don't write signed char or unsigned char then by default it take signed char
// we can store 256 characters or number in char
// in memory we can't store directly number or character so ASCII value of variable is store in memory
// ASCII = American standard code for information interchange
//a = 97 , b = 98 , c = 99 ,......... z // ASCII value of smal a is start from 97
//A = 65 , B = 66 , C = 67 ,......... Z   // ASCII value of capital A is start from 65
// is we store any character in memory then it's ascci value is store in memory
#include<stdio.h>
int main() {

    char a = 'a';
    printf("%c\n", a); // it print a
    printf("%d\n\n", a); // it print 97 because ascii value of a is 97

    char b = 'A';
    printf("%c\n", b); // it print A
    printf("%d\n\n", b); // it print 65 because ascii value of A is 65

    char c = 99;
    printf("%c\n", c); // it print c
    printf("%d\n\n", c); // it print 99 because ascii value of c is 99

    char d = 90;
    printf("%c\n", d); // it print Z
    printf("%d\n\n", d); // it print 90 because ascii value of Z is 90

    char e = 'Z';
    printf("%c\n", e); // it print Z
    printf("%d\n\n", e); // it print 122 because ascii value of Z is 122


// solve this question by making signed and unsigned circle 
// diagrameticaly you can better understand above questions 


    // solve Thai with the help of signed circle
    char f = -126; // it is signed char
    //  char f = 130; // it store -126 in memory because -126 is corresponding to 130
    printf("%c\n", f); // it print any symbol
    printf("%d\n\n", f); // it print 130 because ascii value of 130 is -126

    unsigned char g = -130; //in memory -126 is store because -130 is corresponding to -126 in unsigned circle 
    printf("%c\n", g); // it print any symbol
    printf("%d\n", g); // it print 126 because 126 is present in signed circle   // it print from signed circle
    printf("%u\n\n", g);// it print 126 because 126 is also present in unsigned circle 

    unsigned char h = -129; // in memory it store 127 because 127 is corresponding to -129 in unsigned cicle
    printf("%c\n", h); // it print any symbol 
    printf("%d\n", h);//  it print 127 because 127 is present in signed circle 
    printf("%u", h); // it print 127 because it 127bis present in unsigned circle 

    return 0;
}
    