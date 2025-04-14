// Factorial code 
#include<stdio.h>
int main () {
    int num,i,fact=1;
    printf("enter first number  : ");
    scanf("%d",&num);
 for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("factorial  %d is %d ",num,fact);
return 0;
}
  




/*
// Fibonacci series
#include<stdio.h>
int main () {
    int term1,term2;
    printf("enter first term1 : ");
    scanf("%d",&term1);
    printf("enter second term2 : ");
    scanf("%d",&term2);
    int newterm;
 newterm = term2+term1;
printf(" %d \n ", newterm );

    return 0;
}
*/