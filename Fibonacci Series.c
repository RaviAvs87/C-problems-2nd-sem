#include<stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int c,n;
printf("Enter the length of fibonachi series\t");
scanf("%d",&n);

for(int i = 1; i <= n; i++){
    
    printf("%d",a);
    
    c = a + b;
    a = b;
    b = c;
}
    return 0;
}
