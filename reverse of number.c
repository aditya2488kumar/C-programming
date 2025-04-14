// reverse of any number
#include<stdio.h>
int main () {
    int number ;
    printf("enter a number : ");
    scanf("%d", &number);

    int reverse =0;
    while(number>0) {
        int lastdigit = number%10;
        reverse = (reverse*10) + lastdigit;
        number = number/10 ;
    }
    printf("%d", reverse);


    return 0 ;
}