#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    srand(time(NULL));
    
    int dice = 10;
    int between;
    
    for (int i = 1; i<= 10; i++){
        between = rand() % 6 * 2 + 10;
        
        printf(" Random Between EVEN Numbers from 10 to 11 %d: %d\n",i,between);
    }
    
    return 0;
}
