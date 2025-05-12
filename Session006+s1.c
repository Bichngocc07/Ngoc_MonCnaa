#include <stdio.h>

int main() {
    int numbers[5], sum = 0;

    // Nhap 5 so nguyen tu nguoi dung
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Tinh tong cac so le
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { // Kiem tra so le
            sum += numbers[i];
        }
    }

    // Hien thi ket qua
    printf("Tong cac so le la: %d\n", sum);

    return 0;
}

