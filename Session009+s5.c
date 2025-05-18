#include <stdio.h>

#define MAX_SIZE 100

int  nhapMang(int arr[], int *currentLength) {
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", currentLength);

    if (*currentLength < 0 || *currentLength > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        *currentLength = 0;
        return;
    }
    
    int i = 0; 
    for (i = 0; i < *currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int  hienThiMang(int arr[], int currentLength) {
	int i = 0; 
    printf("Mang hien tai:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int  inChanVaTinhTong(int arr[], int currentLength) {
    int tong = 0;
    int i = 0; 
    printf("Cac phan tu chan: ");
    for (i = 0; i < currentLength; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac phan tu chan: %d\n", tong);
}

int  timMinMax(int arr[], int currentLength) {
    int min = arr[0], max = arr[0];
    int i = 0; 
    for (i = 1; i < currentLength; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);
}

int laSoNguyenTo(int n) {
	int i = 0; 
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void inNguyenToVaTinhTong(int arr[], int currentLength) {
    int tong = 0;
    int i = 0; 
    printf("Cac so nguyen to: ");
    for (i = 0; i < currentLength; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", tong);
}

void thongKePhanTu(int arr[], int currentLength) {
    int x, count = 0;
    int i = 0; 
    printf("Nhap gia tri can thong ke: ");
    scanf("%d", &x);
    for (i = 0; i < currentLength; i++) {
        if (arr[i] == x) count++;
    }
    printf("So lan xuat hien cua %d: %d\n", x, count);
}

void themPhanTu(int arr[], int *currentLength) {
    int value, index;
    printf("Nhap vi tri can them (0-%d): ", MAX_SIZE - 1);
    scanf("%d", &index);

    if (index < 0 || index >= MAX_SIZE) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    if (index >= *currentLength) {
        arr[index] = value;
        *currentLength = index + 1;
    } else {
    	int i; 
        for (i = *currentLength; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        (*currentLength)++;
    }
}

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. In cac phan tu chan va tinh tong\n");
        printf("4. Tim gia tri lon nhat va nho nhat\n");
        printf("5. In cac so nguyen to va tinh tong\n");
        printf("6. Thong ke so lan xuat hien cua mot gia tri\n");
        printf("7. Them phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: nhapMang(arr, &currentLength); break;
            case 2: hienThiMang(arr, currentLength); break;
            case 3: inChanVaTinhTong(arr, currentLength); break;
            case 4: timMinMax(arr, currentLength); break;
            case 5: inNguyenToVaTinhTong(arr, currentLength); break;
            case 6: thongKePhanTu(arr, currentLength); break;
            case 7: themPhanTu(arr, &currentLength); break;
            case 8: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}

