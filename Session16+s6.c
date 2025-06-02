#include <stdio.h>

// Ham tim kiem phan tu su dung con tro
int searchElement(int *arr, int size, int target) {
	int i = 0;
    for (i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return i; // Tra ve vi tri neu tim thay
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

int main() {
	int i = 0;
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Goi ham tim kiem
    int index = searchElement(arr, size, target);

    if (index != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, index);
    } else {
        printf("Khong tim thay phan tu %d\n", target);
    }

    return 0;
}

