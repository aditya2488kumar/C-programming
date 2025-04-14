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