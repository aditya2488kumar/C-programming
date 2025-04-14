// Accessing of structure values
#include<stdio.h>
struct student { 
    int rollno ;
    char name[20];
    float marks;
 };

int main(){

	struct student s1;
    
    printf("enter the rollno of s1 : ");
    scanf("%d", &s1.rollno);
    printf("s1 = %d\n", s1.rollno);
    
    printf("enter the name of s1 : ");
    scanf("%s", &s1.name[20]);
    printf("s1 = %s\n", &s1.name[20]); // in scan and in print use & then it give right output 
    
    printf("enter the marks of s1 : ");
    scanf("%f", &s1.marks);
    printf("s1 = %f\n", s1.marks);

    

/*
    struct student s1 = {1, "Aditya", 67.24} ; // ese jine marzi variables initialization karlo
    struct student s2 = {10, "Kumar", 9.5} ; 
// but you can compare individual value 
   if(s1.rollno > s2.rollno){ // Thai is working 
    	printf("how");
    }
    else {
    	printf("love you");
    }

 /*
 
 // we can not compare s1 and s2 this is not allowed 
    if(s1 > s2){
    	printf("how"); // give error 
    }
*/    
    
    
    
/*
	struct student s1;
    struct student s2 = {10, "Kumar", 9.5} ; 
    s1 = s2 ; // now s1 copies all value of s2
    // s1 = s2 is applicable when the data type is same  struct student s1 = strtuct student s2
    printf("%d\n", s1.rollno); // 1
    printf("%s\n", s1.name); // kumar
    printf("%f\n", s2.marks); // 9.5
*/   

/*
    struct student s1 = {1, "Aditya", 67.24} ; // ese jine marzi variables initialization karlo
    struct student s2 = {10, "Kumar", 9.5} ; 
    // . dot operator is used to print values
    printf("%d\n", s1.rollno); // 1 
    printf("%d\n", s2.rollno); // 10
    printf("%s\n", s1.name); // Aditya
    printf("%f\n", s2.marks); // 9.5
*/   
    
}





/* 
// initialization of structure 
#include<stdio.h>
struct student { 
    int rollno ;
    char name[20];
    float marks;
 };
//  } s = {1, "Aditya", 67.24} ; // it also fine you also intilize like this 
//    s2 = {1, "Aditya", 67.24} ;  // two s and s2 are wrong this is not allowed 

int main(){
//	struct student s = {1, "jenny", 6.24}; // initialization, order should same
//    struct student s = {"hshs", 2, 6.2}; // this is wrong order is not match 
//      struct student s = {1}; // it is partially initialized  rest of all are become null char ,float = null
    struct student s1 = {1, "Aditya", 67.24} ; // ese jine marzi variables initialization karlo
      struct student s2 = {10, "Kumar", 9.5} ; // 
}
*/






/*
// declarating variable in structure
#include<stdio.h>

struct student { 
    int rollno ;
// 	int rollno = 23; we can't intialize rollno bcs memory has not been allocated 
    char name[20];
    float marks;
//    int marks; // it give error bcs we can't use two same names of variables 
};
 //} s1, s2;

int main(){
//   struct student s3; // it also working 
    struct student s1, s2, s3; // s1 s2 S3 are variable or object 
    printf("%d\n", sizeof(s1)); // give 28 bcs it calculat int 4 , char[20] 20, float 4 
    printf("%d", sizeof(struct student)); // 28
}
*/

/*
int main(){ 
    struct student a;
    printf("%d\n", sizeof(a)); // give 28 bcs it calculat int 4 , char[20] 20, float 4 
    printf("%d", sizeof(struct student)); // 28
}








/* 
// Structure beginning
// important about structure
// two variables have can't not same name 
// we can't initialize variables in structure 
#include<stdio.h>

struct student{ 
    int rollno ;
// 	int rollno = 23; we can't intialize rollno bcs memory has not been allocated 
    char name[20];
    float marks;
//    int marks; // it give error bcs we can't use two same names of variables 
};

int main(){ 
    struct student a;
    printf("%d", sizeof(a)); // give 28 bcs it calculat int 4 , char[20] 20, float 4 
}

*/
    