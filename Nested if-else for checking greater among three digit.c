#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter first Number\t");
    scanf("%d",&a);
    
    printf("Enter second Number\t");
    scanf("%d",&b);
    
    printf("Enter third Number\t");
    scanf("%d",&c);
    
    
    if(a>b)
    { 
        if(a>c){
            printf("A is greater");
        }else{
            printf("C is greater");
             }
        }else if(b>c){
            printf("B is greater");
        }else {
            printf("C is greater");
        }
}
