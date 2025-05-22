#include <stdio.h>

long long giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * giaithua(n - 1); 
}

int main() {
    int number = 5;
    printf("Giai thua cua %d la %lld\n", number, giaithua(number));
    return 0;
}

