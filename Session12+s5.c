#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    int i = 2;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num1, num2;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);

    printf("%d %s\n", num1, isPrime(num1) ? "la so nguyen to" : "khong phai so nguyen to");
    printf("%d %s\n", num2, isPrime(num2) ? "la so nguyen to" : "khong phai so nguyen to");

    return 0;
}

