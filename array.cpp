#include <iostream>
#include "array.h"

void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int findMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int enterDataIntoArray(int array[]) {
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] =\n", i);
        scanf("%d",&array[i]);
    }
    return 0;
}

float calculateAverege(int array[]) {
    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += array[i];
    }
    float average = (float) sum / SIZE;
    return average;
}

int saveArrayToFile(int array[]){
    FILE *fptr = NULL;
    fptr = fopen("array.txt","w");
    if (fptr == NULL){
        return 1;
    }

    for (int i = 0; i < SIZE; ++i){
        fprintf(fptr, "array[%d] = %d\n",i, array[i]);
    }

    fclose(fptr);
    return 0;
}