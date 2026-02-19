#include<stdio.h>
#include<string.h>
void main(){
    float hindi, english, physics, chemistry, math, percentage;
    char name[20];
    
    
    printf("what is your Name\t");
    scanf("%s",name);
    
    printf("enter marks of hindi\t");
    scanf("%f",&hindi);
    
    printf("enter marks of english\t");
    scanf("%f",&english);
    
    printf("enter marks of physics\t");
    scanf("%f",&physics);
    
    printf("enter marks of chemistry\t");
    scanf("%f",&chemistry);
    
    printf("enter marks of mathematics\t");
    scanf("%f",&math);
    
     percentage = (hindi+english+physics+chemistry+math)/500*100;
    
    if (percentage >= 60){
        printf("%s you pass the exam with 1st division",name);
    }else if (percentage >= 30){
        printf("%s you pass the exam with 2nd division",name);
    }else{
        printf("%s SORRY! You are failed ",name);
    }

}
