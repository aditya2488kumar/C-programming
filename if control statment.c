// control statment or decision making statment
// if statement or single selection 
// if we using ; semicolon after condition so it terminate all the condition and it execute all the statment 
#include<stdio.h>
int main(){
	int a;
    printf("enter a : ");
    scanf("%d", &a);
    // other than 0 value it considered as true
    if(a)  // if we write 0 then it is out of if statement and it print out of block 
    {
    	printf("inside the block\n"); 
        printf("a = %d\n", a);
    }
    printf("out of block\n\n");
    
    int b ;
    printf("enter the b : ");
    scanf("%d", &b);
    if(b); // it terminate the condition 
    {
    	printf("hello hi\n ");
    }
    printf("kese ho\n\n ");
    
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    
    if(age = 25)// assignment operator so 25 is assign to a 
    {
    	printf("age is = %d\n\n", age );
    }
    
    int value;
    printf("enter the value : ");
    scanf("%d", &value);
     
    if(value == 14)// equality operator 
    {
    	printf("you are great\n");
    }
    printf("you are handsome");
}