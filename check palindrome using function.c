#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_palindrome(char string[]){
    int length = strlen(string)/2;
    int full_length = strlen(string);
    for (int i=0; i<length; i++)
    if (string[i] != string[full_length - i - 1])
    return false;
    
    return true;
}

int main(){
    
    char string1[] = "RVBHBVR";
    char string2[] = "ovo";
    char string3[] = "level";
    char string4[] = "Anshuman";
    
    char string[][10] = {"RVBHBVR","ovo","level","Anshuman"};
    for (int i=0; i<4;i++){
    if (is_palindrome(string[i])){
        printf("%s is palindrome\n",string[i]);
    }else{
        printf("%s is not a palindrome\n",string[i]);
    }
    }
    return 0;
    
}
