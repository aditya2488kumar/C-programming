// 1d array code 
#include<stdio.h>
int main (){
/*
int marks[5]={12,32,54,87,97};
printf("marks is  %d \n",marks[1]);
printf("marks is  %d \n",marks[2]);
printf("marks is  %d \n",marks[3]);
printf("marks is  %d \n",marks[4]);
printf("marks is  %d \n",marks[0]);
*/

int marks[5];
printf("enter the marks : ");
scanf("%d", &marks[0]);

printf("enter the marks : ");
scanf("%d", &marks[1]);

printf("enter the marks : ");
scanf("%d", &marks[2]);

printf("enter the marks : ");
scanf("%d", &marks[3]);

printf("enter the marks : ");
scanf("%d", &marks[4]);
 
for( int i=0;i<=4;i++){
printf("the marks at index value  is %d\n", marks[i]);
}
return 0;
}