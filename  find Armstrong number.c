// armstrong number code
#include <stdio.h>
int main()
{
    int number, counter, moduls, lastnumber, remainelement;
    int secondelement, firstlast, total;
    printf("enter the number : ");
    scanf("%d", &number);
    // 153, 370,371,407,
    int num1, num2;

    lastnumber = number % 10; // last number
    printf("last digit is %d\n", lastnumber);

    remainelement = number / 10;
    printf("last digit is %d\n", remainelement);

    secondelement = remainelement % 10; // second last
    printf("last digit is %d\n", secondelement);

    firstlast = remainelement / 10; // thirdlast
    printf("last digit is %d\n", firstlast);

    // counting the digits
    while (number != 0)
    {
        number = number / 10;
        counter++;
    }
    printf("number of digit is %d \n", counter);
    printf("now the power is %d\n", counter);

    // cude of first number
    printf("%d\n", firstlast);
    int result1 = 1, i = 0;
    while (i < counter)
    {
        result1 = result1 * firstlast;
        i++;
    }
    printf("cube of firstlast element is %d\n", result1);

    // cube of second element
    printf("%d\n", secondelement);
    int result2 = 1, n = 0;
    while (n < counter)
    {
        result2 = result2 * secondelement;
        n++;
    }
    printf("cube of secondlast element is %d\n", result2);

    // cube of third element
    printf("%d\n", lastnumber);
    int result3 = 1, d = 0;
    while (d < counter)
    {
        result3 = result3 * lastnumber;
        d++;
    }
    printf("cube of thirdlast element is %d\n", result3);

    // sum of cube of three digits
    total = result1 + result2 + result3;
    printf("total sum is %d\n", total);

    // conditions checking
    // if(total == 153 || 370 || 371 || 407 )
    if (total == 153 || total == 370 || total == 371 || total == 407)
    {
        printf("it's a armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
    return 0;
}

/*
#include<stdio.h>
int main (){
int number, moduls ;
printf(" enter the number ");
scanf("%d", &number);

moduls = number/10;
printf("%d", moduls);


return 0;
}
*/

/*
// count a digit program
#include<stdio.h>
int main () {
    int num, counter ;
    printf(" enter the number : ");
    scanf( "%d", &num );

    if( num == 0) {
        printf("there is only 1 element in the integer");
    }
    else {
        while( num!= 0) {
            num = num/10;
            counter ++ ;
        }
        printf(" number of digit is %d ", counter );
    }

    return 0;
}
*/

/*
//. code to count the digits in value
#include<stdio.h>
int main() {
    int numbers, count ;
    printf(" enter the numbers ");
    scanf( "%d", &numbers ) ;
    while ( numbers!= 0) {
        numbers =  numbers/10 ;
        count ++ ;
    }
    printf("the numbers of digit is %d ", count );

    return 0;
}
*/

/*
// linear search
#include<stdio.h>
int main() {
    int findnum ;
    int arry[10]= {14,2,73,65,5,76,7,8,89,12};
    printf(" enter the number which you find : ");
    scanf( "%d", &findnum );

    for( int i = 0 ; i<10; i++) {

        if( arry[i] == findnum ) {
 printf(" the value %d. present at index value %d",arry[i],i);
        }
        else {
 printf( " not present in aaray\n" );
        }

    }


    return 0;
}
*/

/*
// area of circle
#include<stdio.h>
int main() {
float radius , pi = 3.14 ,area ;
printf(" enter the radius of circle ");
scanf( "%f" , &radius );

area = pi * radius * radius ;
printf( " %f " , area );

return 0;
}
*/

/*
// area of rectangle
#include<stdio.h>
int main() {
int length , bregth , areaofrectangle ;
printf(" enter the length : ");
scanf( "%d" , &length );
printf(" enter the bregth : ");
scanf( "%d" , &bregth );
areaofrectangle = length * bregth ;
printf(" area of triangle is ");
printf( "%d" , areaofrectangle);

return 0;}
*/

/*
#include<stdio.h>

int main() {

int uid;

printf("enter the your uid ");
scanf("%d", &uid);



if(uid==2272096) { printf("name: Aditya Kumar \n btech cse \n");

} else {

printf("not match in the system");

}

switch (uid)
{
case 2272096:
printf("name : Aditya Kumar \n branch: btech cse (A)");
break;
case 2272111:
printf("name: Sachin Kumar in branch: btech cse (B)");
break;
}

return 0;

}

*/

/*
#include<stdio.h>
int main () {
    int uid;
    printf("enter the your uid : ");
    scanf("%d", &uid);

    if(uid==2272096) {
        printf("name : Aditya Kumar \n btech cse \n");
    }
    else {
        printf("not match in the system");
    }
    switch (uid)
    {
    case 1:

        if(uid == 2272096)
        {
  printf("name : Aditya Kumar \n branch : btech cse (A)");

        }
        break ;
    case 2:
        if( uid == 2272111 )
         {
  printf("name : Sachin Kumar \n branch : btech cse (B)");
         }
        break;


    default :
    printf(" enter the correct value ");
   }

    return 0;
}





/*
#include<stdio.h>
int main ()
{
int num;
scanf( "%d" , &num );
if ( num < 12 )
printf(" Aditya ");

else
printf(" sachin ");


return 0 ;
}

*/

/*
#include<stdio.h>
int main () {
    char name ;

    printf( "enter the name  : " );
    scanf( "%c", &name );

    if( name == aditya ) {
        printf( " uid : 2272096 \n btech cse \n  " );
    }
    else {
        printf( " not match in the system  " );
    }

    return 0;
}
*/

/*

// pointer prograam
#include<stdio.h>
int main ()
{
int a = 23 ;
int *ptr = &a ;
int *ptr2= NULL;
printf("the value of a is %d \n " ,a );
printf("the addres of a is %d \n ", &a);
printf("the of a is %d \n ", ptr);
printf(" the value of ptr2 is %p \n", ptr2 );


return 0 ;



}

*/