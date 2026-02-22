#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[] = "Ravi ";
    char str2[] = "Verma";
    
    int size = strlen(str1) +  strlen(str2) +  1;
    char *result = malloc(size);
    
    strcpy(result, str1);
    strcat(result, str2);
    
    printf("The String apparend: %s", result);
    
    return 0;
}
