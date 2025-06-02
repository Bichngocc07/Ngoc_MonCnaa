#include <stdio.h>

// Ham tinh tong su dung con tro
int sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 5, y = 10, result;

    // Goi ham sum
    sum(&x, &y, &result);

    printf("Tong cua %d va %d la: %d\n", x, y, result);

    return 0;
}

