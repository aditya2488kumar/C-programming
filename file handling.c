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