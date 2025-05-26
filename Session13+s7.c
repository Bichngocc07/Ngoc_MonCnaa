#include <stdio.h>
#include <stdlib.h>

// Ham tao ma tran 2 chieu
int **tao_ma_tran(int so_hang, int so_cot) {
	int i = 0;
    int **ma_tran = (int **)malloc(so_hang * sizeof(int *));
    for (i = 0; i < so_hang; i++) {
        ma_tran[i] = (int *)malloc(so_cot * sizeof(int));
    }

    // Nhap gia tri cho ma tran
    int j = 0;
    printf("Nhap gia tri cho ma tran:\n");
    for (i = 0; i < so_hang; i++) {
        for (j = 0; j < so_cot; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &ma_tran[i][j]);
        }
    }

    return ma_tran;
}

// Ham in ma tran ra man hinh
int in_ma_tran(int **ma_tran, int so_hang, int so_cot) {
	int j = 0;
	int i = 0;
    printf("Ma tran vua nhap la:\n");
    for (i = 0; i < so_hang; i++) {
        for (j = 0; j < so_cot; j++) {
            printf("%d ", ma_tran[i][j]);
        }
        printf("\n");
    }
}

// Giai phong bo nho cap phat dong
int giai_phong_bo_nho(int **ma_tran, int so_hang) {
	int i =0;
    for (i = 0; i < so_hang; i++) {
        free(ma_tran[i]);
    }
    free(ma_tran);
}

// Ham chinh
int main() {
    int so_hang, so_cot;

    printf("Nhap so hang: ");
    scanf("%d", &so_hang);
    printf("Nhap so cot: ");
    scanf("%d", &so_cot);

    // Tao ma tran va in ra man hinh
    int **ma_tran = tao_ma_tran(so_hang, so_cot);
    in_ma_tran(ma_tran, so_hang, so_cot);

    // Giai phong bo nho
    giai_phong_bo_nho(ma_tran, so_hang);

    return 0;
}

