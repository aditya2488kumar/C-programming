
// string initialisation 
#include<stdio.h>
int main (){
char name [5] = {"karan"};//right
char word[] = {"Aditya kumar"};// right
char chicken[5]={'s','h','a','r','\0'};//right
char chicker[4]={'s','h','a','r'};//wrong
char fish[]={'k','u','m','a','r','\0'};//right


printf("%s\n", name);
printf("%s\n", word);
printf("%s\n", chicken);
printf("%s\n", fish);
printf("%s\n", chicker);

/* इस तरह हम स्ट्रिंग के साथ भी कर सकते है 
// this give error 
char name[10];
name = "aditya"
printf("%s\n", name);
*/

/* इस तरह हम स्ट्रिंग के साथ भी कर सकते है 
// this give error 
char name[10]= {"jenny"};
char sample[10];
sample=name;
printf("%s\n", sample);
*/

return 0;
}



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