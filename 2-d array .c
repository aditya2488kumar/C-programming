// 2d array with initialisation with loops 
#include<stdio.h>
int main () {
    int matrix[3][3] ; // size of rows and columns 
    for(int i=0;i<=2;i++) {
       for(int j=0;j<=2;j++) {
           printf("enter the value : "); // input from user 
           scanf("%d",&matrix[i][j]);
       }
   
    }  
   
    
   printf("the matrix of given array is \n");
   // for printing  matrix 
    for(int i=0; i<=2; i++) {
        for(int j=0; j<=2; j++) {
            printf(" %d ",matrix[i][j]);
        }
            printf("\n");
    }
    
    printf("Transpose of matrix is\n");
    
    for(int i=0; i<=2; i++) {
        for(int j=0; j<=2; j++) {
            printf(" %d ",matrix[j][i]);
        }
            printf("\n");
    }
    
    
    return 0;
}



/*
// 2d array with initialisation with loops 
#include<stdio.h>
int main () {
    int matrix[2][2]= {{22,33},{44,55}};
    for(int i=0;i<=1;i++) {
       for(int j=0;j<=1;j++) {
           printf(" the value is %d\n",matrix[0][0]);
       }
    }  
   
    
   printf("the matrix of given array is \n");

    for(int i=0; i<=1; i++) {
        for(int j=0; j<=1; j++) {
            printf(" %d ",matrix[i][j]);
        }
            printf("\n");
    }
    return 0;
}
*/ 



/* 
// 2d array
#include<stdio.h>
int main () {
    int matrix[2][2]= {{22,33},{44,55}};
    printf(" the value is %d\n",matrix[0][0]);
    printf(" the value is %d\n",matrix[0][1]);
    printf(" the value is %d\n",matrix[1][0]);
    printf(" the value is %d\n",matrix[1][1]);
    
    printf("the matrix of given array is \n");

    for(int i=0; i<=1; i++) {
        for(int j=0; j<=1; j++) {
            printf(" %d ",matrix[i][j]);
        }
            printf("\n");
    }
    return 0;
}
*/