// int data type 
//two types of int are 
// signed int  means we can store positive or negative value 
// unsigned int means we can store only positive value 
// if we simply write int then it treated as signed int 
// range of unsigned int. 0 to 65535  
// range of signed int.  -32768 to 32767 
// format specifier for signed int is %d
// format specifier for unsigned int is %u

#include<stdio.h>
int main (){
	signed int a = 32768; // but in memory it stor -32768
    printf("%d\n",a); // it print -32768
    printf("%u\n",a); // it print 32768 because we use %u so it don't print negative value 
    unsigned int b = 32768;
    printf("%u\n\n",b);
    
    int c = 32770;
    printf("%d\n" , c); // it store -32766
    printf("%u\n" , c);// 32770
}