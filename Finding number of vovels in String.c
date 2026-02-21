#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){
    char myarray1[] = "hello my name is ravi verma!";
    
    int count = 0;
    
    for(int i = 0; i<strlen(myarray1); i++){
        switch(toupper(myarray1[i])){
            
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
             count++;
            
        }
    }
    printf("The total number of vovels is %d",count);
    
    return 0;
}
