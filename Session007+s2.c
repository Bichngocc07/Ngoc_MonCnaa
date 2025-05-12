#include <stdio.h>

int main() {
    int mang[5];
    int i;

    // Nhap cac phan tu cua mang
    printf("Nhap 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &mang[i]);
    }

    // In mang ra man hinh
    printf("Mang vua nhap: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

