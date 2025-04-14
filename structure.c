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

    