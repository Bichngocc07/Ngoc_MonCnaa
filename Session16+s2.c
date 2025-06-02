#include <stdio.h>

// Ham doi gia tri su dung con tro
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);
    
    // Goi ham swap
    swap(&x, &y);

    printf("Sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}

