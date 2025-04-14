/* output
// Half pyaramid star pattern

* 
* *
* * * 
* * * *
* * * * *

*/
#include<stdio.h>
void main () {
    int i = 1, j = 0;
    for(i = 1; i<=5 ; i++) {
        for(j = 0; j<i; j++) {
             printf(" * ");
        }
        printf("\n");
    }
}

