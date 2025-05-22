#include <stdio.h>

void printArray(int arr[], int size) {
	int i = 0;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, length);
    return 0;
}

