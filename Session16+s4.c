#include <stdio.h>

// Ham in mang su dung con tro
int printArray(int *arr, int size) {
	int i = 0;
    for (i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Goi ham de in mang
    printArray(arr, size);

    return 0;
}

