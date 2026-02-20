#include <stdio.h>

float avg(float array[], int length){
    float sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + array[i];
    }
    return sum/length;
}

int main() {

float myarray1[] = {8,4,2,12,6,17,8,19,11};
float myarray2[] = {4.5,5,6,12,3,25,5.5,8};

printf("The average of given array is %f\n",avg(myarray1,9));
printf("The average of given array is %f\n",avg(myarray2,8));

    return 0;
}
