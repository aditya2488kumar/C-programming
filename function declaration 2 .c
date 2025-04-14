// function declaration 


// function declaration 
#include<stdio.h>
char name(); // function prototype

int main(){ // function calling 
    
    name();
    return 0;
}

char name(){ // function defination 
    char i;
    printf("enter a character :: ");
    scanf("%c", &i);
    return i;
    
    
}





/*

// function  declaration 
#include<stdio.h>
void sum(void); // function prototype

int main(){ // function calling 
    sum(3,4);// it don't sum 3 and 5 it simply call the function 
    /*
    printf("hello\n");
    sum();
    printf("how are you\n");
    sum();
    */
    
/*    
    return 0;
}

void sum(){ // function defination 
    int num1, num2, sum;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("sum = %d\n", sum);
}


*/

    