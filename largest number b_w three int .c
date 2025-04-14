#include<stdio.h>
int main (){
int a,b,c;
printf("enter first integer");
scanf("%d",&a);
printf("enter second integer");
scanf("%d",&b);
printf("enter third integer");
scanf("%d",&c);
if(a>b && a>c){
printf("a is greater");}
if(b>a && b>c){
printf("b is greater");}
if(c>a && c>b){
printf("c is greater");}


}
