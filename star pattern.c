#include <stdio.h>
int main(){
int rows,i,j;
printf("enter the number of rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=1;j<=i;j++){
printf("*");
}
printf("\n");
}

return 0 ;
}






/*
#include <stdio.h>hua AA 3d
int main(){
int num,i;
printf("enter any number");
scanf("%d",&num);
for( i=2;i<num-1;i++){
}
if(num%i!=0){
printf("it's a prime number");}
else{
printf("not a prime number");}
return 0 ;
}
*/



/*
#include <stdio.h>
int main(){

int year;
printf("enter year");
scanf("%d",&year);
if(year%4==0 && year%400==0){
printf("it's a leap year");
}
else {pH
printf("not a leap year");
}


return 0 ;

}
*/