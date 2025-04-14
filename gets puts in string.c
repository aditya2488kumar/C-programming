
// gets and puts use in string 
// input of string with different ways
#include<stdio.h>
int main (){
/*
char name[5];
printf("enter the string : ");
scanf("%s", name);// it print all characters of string
// ampersent is not used for strings 
// after space it not print
// Adityajumar print - Adityakumar 
// Aditya Kumar print - Aditya 
//scanf("%4s", name);// it print only 4 characters
printf("%s", name);
*/

/*
char name[30];
printf("enter the string : ");
scanf("%s", name);
//gets (name);// space ke baad wala print krega
//fgets(name); it give error 
printf("%10.5s", name);//it print like this----- adity
puts (name);// it automatically add new line 
puts (name);
*/


char name[]={"adityakumar"};
printf("%s\n", name);// it working properly 
printf("%s\n", &name);// it also working properly 
printf("%s\n", &name[3]);// it print - tyakumar
printf("%s", name[3]);// it give error 


return 0;
}

/*
#include<stdio.h>
int main () {
    int number,i;
    int arr[6]= {11,23,45,78,56,76};
    printf("enter the number which you find: ");
    scanf("%d", &number);

for( i=0; i<=6; i++)
{
    if (arr[i] == number)
    {
        printf("element is present at index value %d",i);
    }
}

    return 0;
}
*/





/*
// string initialisation
#include<stdio.h>
int main (){
char name [5] = {"karan"};//right
char word[] = {"Aditya kumar"};// right
char chicken[5]={'s','h','a','m','\0'};//right
char fish[]={'k','u','m','a','r','\0'};//right
char person[4]={'c','h','o','r'};//wrong

printf("%s\n", name);
printf("%s\n", word);
printf("%s\n", chicken);
printf("%s\n", fish);
printf("%s\n", person);

// इस तरह हम स्ट्रिंग के साथ भी कर सकते है
// this give error
//char name[10];
//name = "aditya"
//printf("%s\n", name);


//इस तरह हम स्ट्रिंग के साथ भी कर सकते है
// this give error
//char name[10]= {"jenny"};
//char sample[10];
//sample=name;
//printf("%s\n", sample);


return 0;
}
*/


/*
#include<stdio.h>
int main () {
    int arr[5]={1,2,3,4,5,};
    for(int i=0; i<5; i++)
  {  printf(" %d ",arr[i]);
}

    return 0;
}
*/


/*
// triangle triangle pattern
#include<stdio.h>
int main () {
    int rows, column;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(int i=5; i<rows; i++) {
        for(int j=0; j<=5; j--){
        printf(" * ");
        }
        printf("\n");
    }


    return 0;
}
*/

/*
// square ⬜ pattern
#include<stdio.h>
int main () {
    int rows, column;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows; j++){
        printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
*/


/*
// triangle 📐 pattern
#include<stdio.h>
int main () {
    int rows, column;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++){
        printf(" * ");
        }
        printf("\n");
    }


    return 0;
}
*/


/*
// Factorial code
#include<stdio.h>
int main () {
    int num,i,fact=1;
    printf("enter first number  : ");
    scanf("%d",&num);
 for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("factorial  %d is %d ",num,fact);
return 0;
}
 */




/*
// Fibonacci series
#include<stdio.h>
int main () {
    int term1,term2;
    printf("enter first term1 : ");
    scanf("%d",&term1);
    printf("enter second term2 : ");
    scanf("%d",&term2);
    int newterm;
 newterm = term2+term1;
printf(" %d \n ", newterm );

    return 0;
}
*/