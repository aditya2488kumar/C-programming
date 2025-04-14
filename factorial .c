#include <stdio.h>
int main(){
/*
prime number program 
*/
int i,fact=1,num1;
printf("enter any number");
scanf("%d",&num1);
for(i=1;i<=num1;i++){
fact=fact*i;
}
printf("%d", fact);

return 0 ;

}