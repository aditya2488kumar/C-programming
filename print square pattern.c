// square ⬜ pattern
#include<stdio.h>
int main () {
    int rows, column;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows; j++){
        printf(" * ");
        }
        printf("\n");
    }
    return 0;
}