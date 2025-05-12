#include <stdio.h>

int main() {
    int numbers[5], even_count = 0, odd_count = 0;

    // Nhap 5 so nguyen tu nguoi dung
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        // Kiem tra so chan hay so le
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Hien thi ket qua
    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}

