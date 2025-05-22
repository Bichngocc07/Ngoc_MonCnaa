#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    int i = 1;
    for(i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int numbers[] = {3, 7, 2, 9, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("So lon nhat: %d\n", findMax(numbers, length));
    return 0;
}

