// linear search 

#include<stdio.h>
int main(){

	int value[5]={12,34,6,7,4};
    int number, i, found = 0;
    printf("enter the number : ");
    scanf("%d", &number);
    
    for(int i =0; i < 5; i++){
    	if(value[i] == number){
        	printf("value is present at index value = %d\n", i);
            printf("value is present at position = %d\n", i+1);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("value is not present in array ");
    }
    
    return 0;
    
}





/*

#include<stdio.h>
int main(){

	int value[5]={12,34,6,7,4};
    int number, count =0;
    printf("enter the number : ");
    scanf("%d", &number);
    
    for(int i =0; i < 5; i++){
    	if(value[i] == number){
        	count = count + i;
        	printf("value is present at index value = %d\n", count);
        }
        
        
    }
}

*/