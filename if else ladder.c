// if else ladder 
// used to test multiple classes 
// it is also know as multiple decision making statement 
// with the help of if else ladder we can write multiple conditions
#include<stdio.h>
int main(){
	int marks;
    printf("enter the marks : ");
    scanf("%d", &marks);
    
    if(marks > 90){
    	printf("A grade\n");
        printf("keep it up\n");
    }    
    else if(marks > 80){ 
    		 printf("B grade\n");  
             printf("keep it up\n"); 
         }   
    else if(marks > 70){ 
    		 printf("c grade\n"); 
             printf("keep it up\n");  
         }    
    else if(marks > 60){
       	  printf("d grade\n");   
             printf("keep it up\n"); 
          }   
    else{
    	printf("E grade marks  \n");  
        printf("work hard\n");
    }
    
    printf("best of luck");        
    
    
/* 
  
    if(marks > 90){
    	printf("A grade\n");
        printf("Awesome\n");
    }    
    else{
        if(marks > 80){
    		 printf("B grade\n");   
             printf("keep it up\n");
        }     
        else{
        	 if(marks > 70){
    		 	printf("c grade\n");     
             	printf("work hard\n");
             }
             else{
                 if(marks > 60){
    	    	 	printf("d grade\n");   
                 	printf("work very very hard\n");
                 }
             } 
        }    
    }     
    else 
    	printf("E grade marks are poor");  
    
    printf("best of luck");     
 
 */
 
 
    
/*
    
    if(marks > 90)
    	printf("A grade\n");
    else if(marks > 80) 
    		 printf("B grade\n");   
    else if(marks > 70) 
    		 printf("c grade\n");     
    else if(marks > 60) 
    		 printf("d grade\n");    
    else 
    	printf("E grade marks are poor");  
    
    printf("work hard");        

*/                    
}