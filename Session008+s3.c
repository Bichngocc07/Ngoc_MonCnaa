#include <stdio.h>

#define MAX 100  // Kich thuoc toi da

int main() {
    int n;

    printf("Nhap vao mot so nguyen duong (toi da %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So nhap vao khong hop le.\n");
        return 1;
    }

    int matrix[MAX][MAX];

    int value = 1;
    int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            matrix[i][j] = value++;
        }
    }

    printf("Ma tran vuong %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


