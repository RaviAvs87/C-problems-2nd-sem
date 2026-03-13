#include<stdio.h>
#include<string.h>
int main(){
char string[] = "catdogcat";
char word[] = "cat";
int count = 0;
int end = 9-2;

for(int i=0; i<end; i++){
    int j;
    for(j = 0; j<3; j++){
        if(string[i+j] == word[j]){
            
        }else break;
    }
    if(j == 3){
        count++;
    }
}
printf("The occurrences of given word is %d",count);
return 0;
}
