#include <stdio.h>

int main() {
    int myarray[] = {2,4,6,1,7,8,5,11,9};
    int sum = 0;
    
    for (int i = 0; i < 9; i++){
        sum = sum + myarray[i];
        printf("myarray[%d] = %d\n",i,myarray[i]);
        
    }
    printf("sum so far:%d\n",sum);
    

    return 0;
}
