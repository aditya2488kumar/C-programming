#include<stdio.h>
int main () {


        int arr1[2][2],arr2[2][2], result[2][2];
        for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
                printf("enter the elements in arr1 : ");
                scanf("%d",&arr1[i][j] );
            }
        }

        for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
                printf("enter the elements in arr2 : ");
                scanf("%d",&arr2[i][j] );
            }
        }

        // for printing arr1 matrix
        printf("the matrix of arr1 is \n");
        for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
                printf(" %d ",arr1[i][j]);
             }
              printf("\n");
        }

        // for printing arr2 matrix
        printf("the matrix of arr2 is \n");
        for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
                printf(" %d ",arr2[i][j]);
             }
              printf("\n");
        }


        // Addition of matrix 1 and matrix 2
        int i,j;
        printf("addition of two matrix is \n");
         result[2][2] = arr1[i][j] + arr2[i][j] ;
        for(int i=0 ; i<2 ; i++ ) {
            for(int j=0; j<2; j++) {
                printf(" %d ",result[i][j]);
             }
              printf("\n");
        }


    

    return 0;
}