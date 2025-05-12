#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5}; // Khai bao mang voi gia tri co san
    int do_dai = sizeof(mang) / sizeof(mang[0]); // Tinh do dai cua mang

    // In tung phan tu trong mang
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < do_dai; i++) {
        printf("%d ", mang[i]);
    }

    // In do dai cua mang
    printf("\nDo dai cua mang: %d\n", do_dai);

    return 0;
}

