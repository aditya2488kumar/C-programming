#include <stdio.h>
int main(){
/*
prime number program 
*/
int year;
printf("enter year");
scanf("%d",&year);
if(year%4==0 && year%400==0){
printf("it's a leap year");
}
else {
printf("not a leap year");
}


return 0 ;

}