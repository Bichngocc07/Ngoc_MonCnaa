#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int a = 8;
    int b = 4;

    // Tinh tong, hieu, tich, thuong va luu vao cac bien rieng
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b; // Chuyen kieu de dam bao ket qua chinh xac

    // Hien thi ket qua
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %.2f\n", thuong); // Hien thi 2 chu so thap phan

    return 0;
}

