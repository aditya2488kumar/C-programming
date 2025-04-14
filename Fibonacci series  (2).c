#include<stdio.h>
int main () {

    int firstnum, secondnum, thirdnum, fourthnum, fifthnum;
    printf("enter first number : ");
    scanf("%d", &firstnum);
    printf("enter second number : ");
    scanf("%d", &secondnum);

    printf("%d  %d ", firstnum, secondnum);

    thirdnum = firstnum + secondnum;
    printf(" %d ", thirdnum);

    fourthnum = thirdnum + secondnum;
    printf(" %d ", fourthnum);

    fifthnum = fourthnum + thirdnum ;
    printf(" %d ", fifthnum);


    return 0;

}