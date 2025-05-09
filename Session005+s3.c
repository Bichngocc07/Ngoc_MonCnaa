#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nhap vao phai la so nguyen duong!\n");
        return 1;
    }

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    return 0;
}

