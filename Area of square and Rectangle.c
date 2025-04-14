#include<stdio.h>

int main()
{    float a,b,c;
    printf("First value : ");
    scanf("%f",&a);
    printf("Second value : ");
    scanf("%f",&b);
    c=a*b;
    printf("Answer : %f",c);
if(a==b){printf("Then it is square");}    
 else{printf("Then it is Rectangle");}
    return 0;
}