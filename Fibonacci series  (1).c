// Fibonacci series 
#include<stdio.h>
int main() {
   // variables 
    int term1,term2 ,n ,
    term3,term4,term5,term6,
    term7,term8,term9,term10,term11;
    
     printf("ente first term ; ");
     scanf("%d",&term1);
     printf("ente second term ; ");
     scanf("%d",&term2);
    
   term3=term1+term2;
    printf(" %d %d %d ", term1,term2,term3);
    
    term4 = term3 + term2;
     printf("%d",term4);
    
    term5 = term4 + term3;
    printf(" %d ", term5);
    
    term6 = term5 + term4;
     printf("%d", term6);
    
    term7= term6+term5;
    printf(" %d ", term7);
    
    term8 = term7 + term6;
     printf("%d",term8);
    
    term9 = term8 + term7;
    printf(" %d ", term9);
    
    term10 = term9 + term8;
     printf("%d", term10);
    
 return 0;
}

