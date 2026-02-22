#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){ 
    char str1[20] = "Ravi ";
    char str2[10] = "Verma";
    
    strcat(str1, str2);
    printf("String append: %s",str1);
    return 0;
}
