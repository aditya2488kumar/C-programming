#include<stdio.h>
void move(int,char,char,char);
int main()
{
    int num;
   // int A,B,C;
    printf("\n Enter number of disks :");
    scanf("%d",&num);
    move(num,'A','B','C');
    return 0;
}

void move(int n,char source,char spare,char dest) {
    if(n==1) {
        printf("\nMove from %c to %c",source,dest);
    }
    else {
        move(n-1,source,spare,dest);
        move(1,source,dest,spare);
        move(n-1,spare,dest,source);
    }
}