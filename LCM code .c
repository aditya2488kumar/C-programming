// LCM code 
#include<stdio.h>
int main () {
    int num1, num2,LCM ;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    if( num1>num2 ) {
        LCM = num1 ;
    }
    else {
        LCM = num2 ;
    }
    while(1) {
        if( LCM % num1 == 0 && LCM % num2 ==0 ) {
            printf("LCM of %d and %d is %d",num1,num2,LCM );
            break;
        }
        LCM++;
    }
    return 0;
}



/*
// linear search
#include<stdio.h>
int main() {
    int findnum ;
    int arry[10]= {14,2,73,65,5,76,7,8,89,12};
    printf(" enter the number which you find : ");
    scanf( "%d", &findnum );
for ( int i=0 ; i<=10 ; i++ ){
    if ( arry[i] == findnum ){
    printf(" value is pres  ent at index value %d ", i);
    }
}
return 0;
}
*/




