#include<stdio.h>
int main() {
    int num,value =0;
    printf("enter any number \n");
    scanf("%d",&num);
    do {
        printf("\n%d",value);
        value=value+1;
    } while(value<num);
    return 0;
}











/*
#include<stdio.h>
int main (){
int num1;
printf("enter any number");
scanf("%d",&num1);
if(num1%2==0){
printf("number is even ");
}
elee : {
printf("number is odd ");
}
}
*/