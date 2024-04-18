#include <iostream>
#include "array.h"

void menu(void){
    printf("Select an option:\n");
    printf("1. Enter the values into array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine rhe minimum value\n");
    printf("4. Determine rhe maximum value\n");
    printf("5. Determine rhe average value\n");
    printf("0. Exit\n");
    printf("Select an option here:\n");
}

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    printf("Simple array\n\n");

    int option = 0;
    float average = calculateAverege(array);
    do{
        menu();
        scanf("%d", &option);
        switch (option){
            case 0 :
                break;
            case 1 :
                printf("Entering the values into array\n\n");
                enterDataIntoArray(array);
                break;
            case 2 :
                displayArray(array);
                break;
            case 3 : {
                int min = findMinimumValue(array);
                printf("Minimum value = %d\n", min);
                break;
            }
            case 4 : {
                int max = findMaximumValue(array);
                printf("Maximum value = %d\n", max);
                break;
            }
            case 5 :
                printf("Average value = %f\n", average);
                break;
            case 6:
                printf("Saving data to the file\n\n");
                if (!saveArrayToFile(array)){
                    printf("Array saved to the file\n\n");
                } else {
                    printf("Something went wrong...\n\n");
                }
                break;
            default:
                printf("Pick the right number\n");
        }
    }
    while(option !=0);
    printf("THE END\n");
    return 0;
}
