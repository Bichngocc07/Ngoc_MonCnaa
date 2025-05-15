#include <stdio.h>

int main() {
	int i;
    int n = 3; // Kich thuoc ma tran vuong
    int ma_tran[3][3] = { {1, 2, 3}, 
                          {4, 5, 6}, 
                          {7, 8, 9} };

    int tong_duong_cheo = 0;

    printf("Cac phan tu tren duong cheo chinh: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", ma_tran[i][i]); // In phan tu tren duong cheo chinh
        tong_duong_cheo += ma_tran[i][i]; // Cong vao tong
    }

    printf("\nTong cac phan tu tren duong cheo chinh: %d\n", tong_duong_cheo);

    return 0;
}

