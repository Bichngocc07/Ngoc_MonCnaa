#include <stdio.h>

#define MAX_SIZE 100

int main() {
	int i = 0; 
    int arr[MAX_SIZE];
    int numElements, index, newValue;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &numElements);

    // Kiem tra tinh hop le
    if (numElements < 0 || numElements > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    // Nhap gia tri cho mang
    for (i = 0; i < numElements; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Nhap vi tri can sua va gia tri moi
    printf("Nhap vi tri can sua (0-%d): ", numElements - 1);
    scanf("%d", &index);

    if (index < 0 || index >= numElements) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    // Cap nhat gia tri trong mang
    arr[index] = newValue;

    // In mang sau khi sua
    printf("Mang sau khi sua:\n");
    for (i = 0; i < numElements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

