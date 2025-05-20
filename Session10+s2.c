#include <stdio.h>


void sapXepNoiBot(int mang[], int kichThuoc) {
	int i = 0;
	int j = 0;
    for (i = 0; i < kichThuoc - 1; i++) {
        for (j = 0; j < kichThuoc - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
               
                int temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }
}

// Hàm chính
int main() {
    int mang[] = {5, 1, 4, 2, 8};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi sap xep: ");
    int  i = 0;
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

   
    sapXepNoiBot(mang, kichThuoc);

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

