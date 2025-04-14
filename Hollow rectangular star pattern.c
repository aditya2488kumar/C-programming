/* output
// hollow rectangular star pattern
*  *  *  *  *
*           *
*  *  *  *  *
*/
#include<stdio.h>
void main () {
    int i = 0, j = 0;
    for(i = 0; i<3 ; i++) {
        for(j = 0; j<5; j++) {
            if(j==1 && i==1 || j==2 && i==1 || j==3 && i==1 ){
                printf("   "); // 3 space for hollow 
            }    
            else{
                printf(" * ");
            }    
        }
        printf("\n");
    }
}

