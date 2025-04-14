// control statment or decision making statment
// if-else statement or single selection 

// try your own this on copy 
// if we write semicolon after if condition so it give error because we can't use else without if 
// but we can use if without else
// if we don't use circle brackets in if so we can't use else so it give error 
// because by default only first line is considered as a part of if and after Thai line it is a part of program statment 
// so after program statment we can't used else 
// agr if ke andar 1 statment hai to circle brackets ki koi jarurat nhi 
// else kaam aab kar skta hai 
// agar if ke Nadar 2 statment Hui to ye error dega 
#include<stdio.h>
int main(){
	int age ;
    printf("enter age : ");
    scanf("%d", &age);
    if(age > 20 && age <30)
    	printf("age = %d\n", age);
    //	printf("love you\n\n");
    
    else{
    	printf("age is small\n");
        printf("jenny is best\n\n");
    }
    
    printf("jenny lecture is best");
}