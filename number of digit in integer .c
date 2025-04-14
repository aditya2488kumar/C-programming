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
// swap two numbesrs without using third variable
#include<stdio.h>
int main() {
int value1 , value2 , temp ;
printf(" enter the value of first value1 ; " );
scanf( "%d" , &value1 );
printf(" enter the value of first value2 ; " );
scanf( "%d" , &value2 );
value1 = value1 / 0 ;
value1 = value2 ;
value2 = value1 ;
printf( "the value1 is %d \n the value2 id %d", value1 , value2);

return 0;
}
*/


/*
// swap two numbesrs of third variable
#include<stdio.h>
int  main() {
 int value1 , value2 , temp ;
printf(" enter the value of first value1 ; " );
scanf( "%d" , &value1 );
printf(" enter the value of first value2 ; " );
scanf( "%d" , &value2 );

// swap numbers
temp = value1 ;
value1 = value2 ;
value2 = temp ;

printf( "the value1 is %d \n the value2 id %d", value1 , value2);

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