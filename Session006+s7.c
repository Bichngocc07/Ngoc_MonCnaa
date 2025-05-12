#include <stdio.h>

int main() {
    int n;

    // Nhap so nguyen tu nguoi dung
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // In cac uoc cua n
    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

