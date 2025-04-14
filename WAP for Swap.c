#include<stdio.h>
int main() {
  float a,b,c;
  printf("Enter first number: ");
  scanf("%f", &a);
  printf("Enter second number: ");
  scanf("%f", &b);
  c=a;
  a=b;
  b=c;
  printf("\nAfter swapping, first number = %f\n",a);;
  printf("After swapping, second number = %f",b);
  return 0;
}
