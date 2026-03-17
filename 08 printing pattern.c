#include<stdio.h>
void main(){
    int i,j;
    int k = 5;
    
            
    for(i = 1; i<=5; i++){ 
        
        for(int num = 1; num<=k-i; num++){
                printf(" ");}
        
        for(j = 1; j<=i; j++){
            
            printf("*");
        }
        printf("\n");
    }
    
    
}
