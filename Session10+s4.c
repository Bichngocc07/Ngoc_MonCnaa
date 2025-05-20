#include <stdio.h>

// Ham sap xep chon
void sapXepChon(int mang[], int kichThuoc) {
	int i = 0;
	int j = 0;
    for (i = 0; i < kichThuoc - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < kichThuoc; j++) {
            if (mang[j] < mang[minIndex]) {
                minIndex = j;
            }
        }
        // Hoan doi gia tri
        int temp = mang[minIndex];
        mang[minIndex] = mang[i];
        mang[i] = temp;
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
    sapXepChon(mang, kichThuoc);

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

