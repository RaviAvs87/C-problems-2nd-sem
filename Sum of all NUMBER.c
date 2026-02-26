#include<stdio.h>

int main(){
    int num, sum = 0,digit;
    
    printf("Enter five digit number\t\t");
    scanf("%d",&num);
    
    while(num != 0)
    {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    printf("Sum of all digit is = %d\t\t",sum);
    return 0;
}
