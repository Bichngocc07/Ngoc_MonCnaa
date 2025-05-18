#include <stdio.h>

#define MAX_SIZE 100

int main() {
	int i = 0; 
    int arr[MAX_SIZE];
    int currentLength = 0;
    int numElements, value, addIndex;

    // Nhap so phan tu ban dau
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &numElements);

    // Kiem tra tinh hop le cua so phan tu nhap
    if (numElements < 0 || numElements > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    currentLength = numElements;

    // Nhap gia tri cac phan tu
    for (i = 0; i < numElements; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Nhap vi tri va gia tri can them
    printf("Nhap vi tri can them (0-%d): ", MAX_SIZE - 1);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= MAX_SIZE) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    // Them phan tu vao vi tri tuong ung
    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }

    // In mang sau khi cap nhat
    printf("Mang sau khi them phan tu:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

