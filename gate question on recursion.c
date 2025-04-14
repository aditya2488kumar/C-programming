// Gate question on recursion
// first solve on notebook then you understand the output 
// used forward and backward approach to solve recursion problems
#include<stdio.h>

void count(int n){
	static int d = 1;
    printf(" %d ", n);
    printf(" %d ", d);
    d++;
    if(n > 1)
    	count(n - 1);
        
    printf(" %d ", d);    
}

void main(){
	count(3);
} 

// output.   3  1  2  2  1  3  4  4  4


/*
// non tail recursion problem
// solve on copy then you understand the output 
int print(int a){
	if(a < 1)
    	return 0;
    else
        return 1 + print(a / 2); // it is non tail.r bcs in last we are adding 1 in print(a/2) that was why it call tail recursion problem 
}

void main(){
	int x;
    x = print(10);
    printf("x = %d", x);
}
*/



/* 
// Non tail recursion
// funtion ke baad aur bhi kuch likha hoga jo hme karna hoga 
#include<stdio.h>

void print(int a){
	if(a < 1)
    	return ;
    else {
    	printf(" %d ", a);
        print(a / 2); // again calling print() // so funtion calling last nhi hai iske baad bhi print statment hai 
        printf(" %d ", a); // function ke baad ye bhi karna hai 
    }    
}

void main(){
	print(10); // calling 
}
*/



/*
// tail recursion
// the last thing to do in the function is called tail recursion
// tail recursion are like loops
// it take more. space in stack because it do not return that was why it take more space 
#include<stdio.h>

void print(int a){
    if(a < 1)
         return ;
    else{
    	printf(" %d ", a); // when 5/2 then 2.5 will come but it take only 2 because we use int data type 
        print(a / 2);// again calling print()// last thing to do in this funtion so it called tail recursion 
    }     
}

void main(){
	print(10); // it calls print()
} 
*/



/*
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
*/







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