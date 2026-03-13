#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "hihihihihihihi";
    char ch = 'i';
    int i = 0;
    int j = 0;
    
    for(i = 0; i<14; i++){
        if (str[i] != ch){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("After removing %c is %s is",ch,str);
    return 0;
}
