#include <stdio.h>

int main() {
    int mang[5] = {1, 3, 5, 7, 9}; // Khoi tao mang voi gia tri bat ky
    int co_so_chan = 0; // Bien kiem tra co so chan hay khong

    // In cac so chan trong mang
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            co_so_chan = 1; // Danh dau co so chan
        }
    }

    // Neu khong co so chan, in thong bao
    if (co_so_chan == 0) {
        printf("Mang khong chua so chan");
    }

    printf("\n");

    return 0;
}

