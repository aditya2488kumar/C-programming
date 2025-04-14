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