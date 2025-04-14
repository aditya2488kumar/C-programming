#include<stdio.h>
int main () {

     int *ptr;{
         int a=20;
         ptr = &a;
         printf("%d\n", *ptr);
     }
   // printf("%d",a);
    printf("%d\n", *ptr); // ise error show karna cahiye 
   // becase a local variable hai vo ab vanish hai 
    // kuch aur code ke baad ye shi se work nhi krega 
}


/*
// dangling pointer
#include<stdio.h>
int main () {
    int * ptr= 10;
    printf("%d\n", ptr);
    free(ptr);
    printf("%d\n", *ptr);// showing abnormal behaviour 
}


/*
// NULL pointer
#include<stdio.h>
int main() {
    /*
        int *ptr;
        int *ptr2;
     // this give error
*/
/*
    int *ptr=NULL;
    int *ptr2=NULL;

    if( ptr == ptr2) {
        printf("null pointer\n");
    }
    else {
        printf("%d\n", *ptr);
    }
*/


/*
    int *ptr=NULL;
    int *ptr2;
    printf("%d\n", ptr);
   //  printf("%d", *ptr); // give error
    printf("%d\n", ptr2); // this give garbage value
*/

/*
    int *ptr,a=10;
  //  int *ptr;
    ptr= &a;
    printf("%d\n", *ptr);
*//*
}
*/

/*
// palindrome characters
#include<stdio.h>
#include<string.h>
int main (){
    char name[4];
    printf("enter the string : ");
    scanf("%s", name);
    printf("%s\n", name);
    int length;
    length = strlen(name);
    printf("string length is %d\n", length);ppp
 //  printf("%c", name[4]);
   if( name[0]==name[3]){
       if(name[1]==name[2]){
            printf("it is palindrome characters");
       }
   }
   else{
   printf("not a pallidrom characters");
   }
}
*/

/*
// null pointer in c
#include<stdio.h>
int main(){
    int *ptr;
    ptr = NULL; // NULL = 0
    printf("%d\n", ptr);
 //   printf("%d\n", *ptr); // showing error

    }
*/

/*
// void Pinter
#include<stdio.h>
int main(){
    void *p; // declaring void pointer
    int a=12;
    char c= 'g';
    float f = 4.7;
    p =&a;
    printf("%d\n", *(int*)p ); // 12
    p =&c;
    printf("%c\n", *(char*)p ); // g
    p= &f;
    printf("%f\n", *( float*)p); // 4.7
}
*/

/*
#include<stdio.h>
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p, *q;
    p = a;
    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p);
}
*/

// problem on Pinter
// different cases of Pinter
/*
#include<stdio.h>
int main(){
    char str[]={"Aditya Kumar Prajapati"};
    char* ptr;
    ptr = str;
    printf("%c\n", *ptr);// A
    printf("%c\n", *(ptr++ +1) );// d
    printf("%c\n", *((ptr-- +5)-1)+3 );//
    printf("%c\n", *(++ptr +10)-32 ); //
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr );
    //

}
*)


/*
#include<stdio.h>
void main (){
    char str[]= {"Aditya Kumar prajaptai"};
    char *ptr = str;
    printf("%c\n", *ptr); // A
    //printf("%c\n", *ptr++); // A
    //printf("%c", *ptr); //d
    printf("%c\n", *(ptr++ +1));// d
    printf("%c\n", *((ptr++ +1)-1)+1); // e

}
*/

/*
#include<stdio.h>
int main (){
     int a = 12;
  const int *p = &a;
     *p = 23;
    printf("%d", *p); // error
}
*/

/*
#include<stdio.h>
int main (){
  const  int a = 12;
    const int*p = &a;
     *p = 23;
    // it give error because we only can read value
    // we can't change it because we use const data type
    printf("%d", *p);
}
*/


/*
include<stdio.h>
int main (){
   const int a = 12;
    int*p = &a;
     *p = 23;
    printf("%d", *p); // 23
}
*/