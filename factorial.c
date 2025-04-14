#include <stdio.h>
int main(){
/*
prime number program 
*/
int i,fact=1,number;
printf("enter any number");
scanf("%d",&number);
for(i=1;i<=number;i++){
fact=fact*i;
}
printf("factorial is %d ",fact,number);



return 0 ;

}