#include<stdio.h>
 main()
{
  int a,b ;
  printf("New password : ");
  scanf("%s",&a);
  printf("Confirm password : ");
  scanf("%s",&b);
if (a==b){printf("Password changed");}
if (a!=b){printf("Invalid");}
}