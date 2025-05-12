#include <stdio.h>

int main() {
    int mang[5] = {3, 7, 2, 9, 5}; // Khoi tao mang voi gia tri bat ky
    int max = mang[0], min = mang[0];
    int i;

    // Tim phan tu lon nhat va nho nhat
    for (i = 1; i < 5; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    // In ket qua
    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}

