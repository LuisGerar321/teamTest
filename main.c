#include "./max.h"
#include <stdio.h>


int arr[3] = {8,1,2};

int main(){
    int maxIndex = max(arr, 3);
    printf("maxIndex  %d, value: %d",  maxIndex, arr[maxIndex]);
    return 0;
}