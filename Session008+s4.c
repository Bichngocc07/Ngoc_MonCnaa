#include <stdio.h>

int main() {
	int i;
	int j;
    int a[3][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, -1}
    };

    int max = a[0][0];  // khoi tao max = phan tu dau tien

    // duyet mang 2 chieu tim phan tu lon nhat
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

