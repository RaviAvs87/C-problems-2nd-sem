#include<stdio.h>

int main (){
    char alphabet;
    printf("Enter any alphabet that you want to check wheather it is vovel or not\t\t");
    scanf("%c",&alphabet);
    
    switch(alphabet){
        case 'a': printf("This is a vovel");
        break;
         case 'e': printf("This is a vovel");
         break;
        case 'i': printf("This is a vovel");
        break;
        case 'o': printf("This is a vovel");
        break;
        case 'u': printf("This is a vovel");
        break;
        case 'A': printf("This is a vovel");
        break;
        case 'E': printf("This is a vovel");
        break;
        case 'I': printf("This is a vovel");
        break;
        case 'O': printf("This is a vovel");
        break;
        case 'U': printf("This is a vovel");
        break;
        default: printf("This alphabet is consonant");
    }
    
    
    
    return 0;
}
