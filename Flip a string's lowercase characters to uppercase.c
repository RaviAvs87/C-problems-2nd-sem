#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str1[] = "my name is ANSHUMAN";
    
    int length = strlen(str1);
    
    printf("length is = %3d\n\n",length);
    
    for(int i=0; i<length; i++){
        if(isupper(str1[i]))
        str1[i] = tolower(str1[i]);
        
        else if(islower(str1[i]))
        str1[i] = toupper(str1[i]);
    }
    printf("After flip = %3s",str1);
    
    return 0;
}
