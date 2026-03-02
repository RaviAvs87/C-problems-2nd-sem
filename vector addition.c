#include<stdio.h>

int main(){
    int v1[] = {2,3,5};
    int v2[] = {5,6,7};
    int result[3];
    
    for(int i = 0; i<3; i++){
       result[i] = v1[i] + v2[i];
    }
    
      printf("The vector Addition is\t");
    for(int i=0; i<3; i++){
      
    printf("%d",result[i]);
    }
    return 0;
}