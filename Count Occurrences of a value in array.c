#include <stdio.h>

int main(){
    int myarray[] = {6,7,8,4,6,7,8,4,3,2,1,9,4};
    int count = 0;
    int to_find = 4;
    
    for(int i=0; i<13; i++){
        if(to_find == myarray[i])count++;
        
    }
printf("4 is found: %d Times in Myarray",count);
    return 0;
}
