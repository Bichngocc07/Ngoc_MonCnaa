#include <stdio.h>

#define MAX_SIZE 100

int main() {
	int i = 0; 
    int arr[MAX_SIZE];
    int currentLength = 0;
    int numElements, index;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &numElements);

    // Kiem tra tinh hop le
    if (numElements < 0 || numElements > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    currentLength = numElements;

    // Nhap gia tri cho mang
    for (i = 0; i < numElements; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Nhap vi tri can xoa
    printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &index);

    if (index < 0 || index >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    // Xoa phan tu tai vi tri index
    for (i = index; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    // In mang sau khi xoa
    printf("Mang sau khi xoa:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

