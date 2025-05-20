#include <stdio.h>

// Ham sap xep chen
void sapXepChen(int mang[], int kichThuoc) {
	int i = 0;
    for (i = 1; i < kichThuoc; i++) {
        int key = mang[i];
        int j = i - 1;
        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j = j - 1;
        }
        mang[j + 1] = key;
    }
}

// Ham chinh
int main() {
    int mang[] = {5, 1, 4, 2, 8};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi sap xep: ");
    int i = 0;
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    // Goi ham sap xep
    sapXepChen(mang, kichThuoc);

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

