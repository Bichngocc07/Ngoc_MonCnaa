#include <stdio.h>
#include <stdlib.h>

// Khai bao ham
void nhapMang(int **a, int *n);
void hienThiMang(int *a, int n);
int tinhDoDaiMang(int *a);
int tinhTongMang(int *a, int n);
int timMax(int *a, int n);

int main() {
    int *a = NULL;
    int n = 0, luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(&a, &n);
                break;
            case 2:
                hienThiMang(a, n);
                break;
            case 3:
                printf("Do dai mang: %d\n", tinhDoDaiMang(a));
                break;
            case 4:
                printf("Tong cac phan tu trong mang: %d\n", tinhTongMang(a, n));
                break;
            case 5:
                printf("Phan tu lon nhat: %d\n", timMax(a, n));
                break;
            case 6:
                free(a);
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (luaChon != 6);

    return 0;
}

// Ham nhap mang
void nhapMang(int **a, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    int i = 0;
    *a = (int*)malloc((*n) * sizeof(int));
    for (i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &(*a)[i]);
    }
}

// Ham hien thi mang
void hienThiMang(int *a, int n) {
    printf("Cac phan tu trong mang: ");
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Ham tinh do dai mang
int tinhDoDaiMang(int *a) {
    return (a == NULL) ? 0 : sizeof(a) / sizeof(a[0]); 
}

// Ham tinh tong mang
int tinhTongMang(int *a, int n) {
    int tong = 0;
    int i = 0;
    for (i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

// Ham tim phan tu lon nhat
int timMax(int *a, int n) {
    if (n == 0) return 0;
    int max = a[0];
    int i = 0;
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

