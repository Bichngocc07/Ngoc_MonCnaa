#include <stdio.h>

#define MAX_SIZE 100

int  nhapMang(int arr[], int *currentLength) {
    int i = 0;
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", currentLength);

    if (*currentLength < 0 || *currentLength > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        *currentLength = 0;
        return;
    }

    for (i = 0; i < *currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int  hienThiMang(int arr[], int currentLength) {
    int i = 0;
    if (currentLength == 0) {
        printf("Mang dang rong.\n");
        return;
    }

    printf("Mang hien tai:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int  themPhanTu(int arr[], int *currentLength) {
    if (*currentLength >= MAX_SIZE) {
        printf("Mang da day, khong the them phan tu moi.\n");
        return;
    }

    int value, index;
    printf("Nhap vi tri can them (0-%d): ", *currentLength);
    scanf("%d", &index);

    if (index < 0 || index > *currentLength || index >= MAX_SIZE) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    int i = 0; 
    for (i = *currentLength; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*currentLength)++;
}

int  suaPhanTu(int arr[], int currentLength) {
    int index, newValue;
    if (currentLength == 0) {
        printf("Mang dang rong.\n");
        return;
    }

    printf("Nhap vi tri can sua (0-%d): ", currentLength - 1);
    scanf("%d", &index);

    if (index < 0 || index >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[index] = newValue;
}

int  xoaPhanTu(int arr[], int *currentLength) {
    int index;
    if (*currentLength == 0) {
        printf("Mang dang rong.\n");
        return;
    }

    printf("Nhap vi tri can xoa (0-%d): ", *currentLength - 1);
    scanf("%d", &index);

    if (index < 0 || index >= *currentLength) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    int i = 0; 
    for (i = index; i < *currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*currentLength)--;
}

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;

    do {
        printf("\n==== MENU ====\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: nhapMang(arr, &currentLength); break;
            case 2: hienThiMang(arr, currentLength); break;
            case 3: themPhanTu(arr, &currentLength); break;
            case 4: suaPhanTu(arr, currentLength); break;
            case 5: xoaPhanTu(arr, &currentLength); break;
            case 6: printf("Dang thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 6);

    return 0;
}
