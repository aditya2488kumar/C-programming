
// indirect recursion Problem
// indirect means when funtion calls other funtion in circular path then it is called indirect recursion
// indirect recursion problem 
// fun1() to fun2() to fun1()
// it is like a factorial code 
#include<stdio.h>
// funtion prototype
int fun1(int);
int fun2(int);

void main(){
	printf("value is = %d", fun1(5)); // 120
}

int fun1(int n){
    if(n <= 1)
        return 1;
    else
    	return n * fun2(n -1);
}

int fun2(int n){
    if(n <= 1)
        return 1;
    else
    	return n * fun1(n -1);
}








/*
// direct recursion problem 
// recursion problem 1 
// defination 
int sum(int x) {
    int s = 0;
    if(x == 0)
        return x;
    s = x + sum(x - 1);
    return s;
}

void main() {
    int a;
    a = sum(5); // calling 
    printf("a = %d", a);
}
*/



/*
// recursion
// draw diagram then you can better understand this
// little bit hard but solve on copy first
#include<stdio.h>

void display(int n){
	if(n < 1){
        return ;
    }
    else{
        printf(" %d ", n);
        display(n - 1);
        printf(" %d ", n);
    }
}

void main(){
	int n = 3;
    display(n);
}
*/