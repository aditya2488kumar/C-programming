//Program to print following pattern.
/*           1
            121
           12321
          1234321
         123454321
*/
#include<stdio.h>
int main(){ 
	int i,j,k,l;
    for(i=1;i<=5;i++){
    	for(k=5;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(l=j-2;l>0;l--){
        	printf("%d",l);
        }
        printf("\n");
    }
  return 0;
}


/*
// file handling
#include<stdio.h>
#include<stdlib.h>
void main (){
    char ch = 'a';
	FILE *fp = NULL;
    fp = fopen("ABC.c", "w");
    fputc(ch, fp);
    fclose(fp);
}
*/