#include <stdio.h>

int main() {
    int n;

    // Yêu c?u nh?p s? nguyên t? 1 d?n 10, có ki?m tra l?i nh?p
    do {
        printf("Nhap mot so nguyen tu 1 den 10: ");
        if (scanf("%d", &n) != 1) { // Ki?m tra nh?p dúng s? nguyên
            printf("Loi: Vui long nhap mot so nguyen!\n");
            return 1;
        }

        if (n < 1 || n > 10) {
            printf("So nhap vao khong hop le! Hay nhap lai.\n");
        }
    } while (n < 1 || n > 10);

    // In b?ng c?u chuong
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

