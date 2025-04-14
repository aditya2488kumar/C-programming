#include<stdio.h>
// function declaration
void indian();
void french();
//function call
int main (){
printf("enter i for indian && f for French : ");
char ch,i;
scanf("%c",&ch);
if( ch ==  'i' ){
printf("namaste ");
} else {
printf("how are you ");}
return 0;
}
// function defination 
void indian (){
printf("indian \n");
}
void french (){
printf("french \n");
}


/*
// code if else in function
#include<stdio.h>
// function declaration 
void printcountry ();
int main () {
// function call 
    printcountry();
    return 0;
}
// function defination 
void printcountry() {
int country, Indian ;
    printf("enter your country : ");
    scanf("&c",&country);
    if(country==Indian)
    {
    printf(" NAMASTE : ");}
    else{
    printf(" how are you forigner :");}
   
    
}
*/





/*
// program to print square
#include<stdio.h>
//function declaration
void printhello();
//function call
int main() {
    printhello();
    return 0;
}

//fution defination
int num1,num2,num3;
void printhello () {
    printf("enter three number ");
    scanf("%d %d %d ",&num1,&num2,&num3);

}



/*
#include<stdio.h>
//function declaration
void printhello ();
void hello ();
int main(){
//function call
printhello();
hello();
printhello();
hello();
printhello();
hello();
printhello();
hello();
return 0;
}
//function defination
void printhello (){
printf("good morning \n");
}
void hello (){
printf("good bye \n");
}

/*
#include<stdio.h>
int main(){
int num;
printf("enter the number which you want the table \n");
scanf("%d",&num);
printf("the table of %d is 👇👇👇 \n",num);
for(int i=1;i<11;i++)
{
printf("num * i = %d \n",num*i,num,i);
}
return 0;
}
*/



/*
#include<stdio.h>
int main(){
int num1,num2;
qqqqqprintf("enter num1");
scanf("%d",&num1);
printf("enter the operation");
printf("enter num2");
scanf("%d",&num2);

switch(num1,num2){
case1 'num1+num2':
printf("addition of num1 and num2 is %d");
break;
case2 'num1-num2':
printf("substration of num1 and num2 is %d");
break;
case3 'num1*num2':
printf("multiplication of num1 and num2 is %d");
break;
case4'num1/num2':
printf("division of num1 and num2 is %d");
break;

}

return 0;
}
*/







/*
#include<stdio.h>
//#include<canio.h>
int main (){
char a,i,o,u,e;
printf("entre any alphabet");
scanf("%c",&a);
switch(a)
{
case 'a':
case 'A':
printf("%c is vowel",a);
break;
case 'i':
case'I':
printf("%c is vowel ",i);
break;
case 'o':
case 'O':

printf("%c is vowel ",o);
break;
case 'u':
case 'U':
printf("%c is vowel ",u);
break;
case 'e':
case 'E':
printf("%c is vowel ",e);
break;

default :
printf("Vowel likh MADHERCHOD");
}

return 0;
}
*/
    