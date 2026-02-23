#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    srand(time(NULL));
    
    int dice = 6;
    int roll;
    
    for (int i = 1; i<= 6; i++){
        roll = rand() % 6 + 1;
        
        printf("Dice %d: %d\n",i,roll);
    }
    
    return 0;
}
