#include <stdio.h>

int main() {
    int mang[5]; // Khai bao mang 5 phan tu
    int i;       // Bien dem

    // Nhap du lieu cho mang
    printf("Nhap 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Thay doi gia tri cua mang
    for (i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            mang[i] += 3; // Neu la so chan, cong 3
        } else {
            mang[i] += 2; // Neu la so le, cong 2
        }
    }

    // In mang sau khi thay doi
    printf("Mang sau khi thay doi: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

