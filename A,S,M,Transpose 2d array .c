// additiona of two Matrix with declaration 
#include<stdio.h>
int main () {
    int arr1[2][2];
    int arr2[2][2];
    int i,j;
    int result[2][2];
    for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
    printf("enter the value of arr1 is : ",arr1[i][j]);
            scanf(" %d ", &arr1[i][j]);
        }
    }

for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
     printf("enter the value of arr2 is : ",arr2[i][j]);
            scanf(" %d ", &arr2[i][j]);
        }
    }

printf("the arr1 matrix is \n ");
for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
            printf(" %d ", arr1[i][j]);
            
        } printf("\n");
    }

printf("the arr2 matrix is \n ");
for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
            printf(" %d ", arr2[i][j]);
            
        } printf("\n");
    }
    

// for printing additional matrix 
printf("addition of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
        // for printing substraction  matrix 
        printf("subsration  of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] -  arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
        
// for printing multiplication matrix 
printf("multiplication  of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] * arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
        
        // for printing transpose  matrix 
printf("transpose   of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] * arr2[i][j]; 
                printf(" %d ", result[j][i] );
             }
              printf("\n");
        }
        
     
        
return 0;
}






/* 
// additiona of two Matrix with initialisation 
#include<stdio.h>
int main () {
    int arr1[2][2]= {{1,2},{3,4}};
    int arr2[2][2]= {{5,6},{7,8}};
    int i,j;
    int result[2][2];
    for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
            printf(" the value of arr1 is  %d \n", arr1[i][j]);
        }
    }

for(int i=0; i<=1 ; i++) {
        for(int j=0; j<=1 ; j++) {
            printf(" the value of arr2 is %d \n", arr2[i][j]);
        }
    }


// for printing additional matrix 
printf("addition of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
        // for printing substraction  matrix 
        printf("subsration  of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] -  arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
        
// for printing multiplication matrix 
printf("multiplication  of matrix is \n ");
for(int i=0 ; i<=1 ; i++ ) {
            for(int j=0; j<=1; j++) {
            result[i][j] = arr1[i][j] * arr2[i][j]; 
                printf(" %d ", result[i][j] );
             }
              printf("\n");
        }
        
     
        
return 0;
}
*/
