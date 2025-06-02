#include <stdio.h>

// Ham cap nhat phan tu su dung con tro
int updateElement(int *arr, int size, int newValue, int index) {
    if (index >= 0 && index < size) {
        *(arr + index) = newValue;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

int main() {
	int i = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Goi ham cap nhat phan tu
    updateElement(arr, size, 10, 2);

    printf("Mang sau khi cap nhat: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

