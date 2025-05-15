#include <stdio.h>

int main() {
	int j;
	int i;
    int hang = 3, cot = 4; // Kich thuoc ma tran
    int ma_tran[3][4] = { {1, 2, 3, 4}, 
                          {5, 6, 7, 8}, 
                          {9, 10, 11, 12} };

    int tong_bien = 0;

    // Duyet hang dau tien va hang cuoi cung
    for ( j = 0; j < cot; j++) {
        tong_bien += ma_tran[0][j]; // Hang dau tien
        tong_bien += ma_tran[hang - 1][j]; // Hang cuoi cung
    }

    // Duyet cot dau tien va cot cuoi cung (tru goc da cong)
    for ( i = 1; i < hang - 1; i++) {
        tong_bien += ma_tran[i][0]; // Cot dau tien
        tong_bien += ma_tran[i][cot - 1]; // Cot cuoi cung
    }

    printf("Tong cac phan tu tren duong bien: %d\n", tong_bien);

    return 0;
}

