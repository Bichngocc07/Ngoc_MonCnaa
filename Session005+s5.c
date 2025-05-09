#include <stdio.h>

int main() {
    // Duyet qua cac so tu 1 den 9
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        
        // Duyet qua cac so tu 1 den 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Xuong dong giua cac bang
    }

    return 0;
}

