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
    