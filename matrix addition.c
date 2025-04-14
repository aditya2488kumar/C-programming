#include<stdio.h>
//#include<canio.h>
int main (){
int i,j;
int  arr1[2][2]={7,4, 3,4};
int  arr2[2][2]={5,2,4,5};
int res[2][2];
for( i=0;i<2;i++){
for(j=0;j<2;j++){
res[i][j]=arr1[i][j]+arr2[i][j];
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d",res[i][j]);
}
printf("\n ");
}

return 0;
}
    