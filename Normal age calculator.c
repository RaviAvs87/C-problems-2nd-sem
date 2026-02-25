#include<stdio.h>

int main(){
    
    int date, month, year, age;
    
    int currentdate = 25;
    int currentmonth = 2;
    int currentyear = 2026;
    
    printf("Enter your birth date\t\t");
    scanf("%d",&date);
    
    printf("Enter your birth month\t\t");
    scanf("%d",&month);
    
    printf("Enter your birth year\t\t");
    scanf("%d",&year);
    
    age = currentyear - year;
    
    if(currentmonth < month||(currentmonth == month && currentdate < date ) )
    {
        age--;
    }
    
    printf("age = %d\t\t", age);
    
    return 0;
    
    
    
    
    
    
}
