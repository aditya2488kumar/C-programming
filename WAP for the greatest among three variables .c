// WAP for the greatest among three variables 
#include<stdio.h>
int main() {
  float a,b,c;
  printf("Enter a :");
  scanf("%f",&a); 
  printf("Enter b :");
  scanf("%f",&b);
  printf("Enter c :");
  scanf("%f",&c);
if(a>b){if(b>c){printf("a is greater");}
else{printf("b is greater");}}
else{if(b>c){printf("b is greater");}
else{printf("c is greater");}}
}


