#include <stdio.h>

int main() {
	int i;
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("In cac phan tu tu cuoi ve dau:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}


