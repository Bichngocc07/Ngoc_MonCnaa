#include <stdio.h>
#include <stdlib.h>

// Ham kiem tra so nguyen to
int la_so_nguyen_to(int n) {
	int i = 2;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Ham nhap mang
int nhap_mang(int **mang, int n, int m) {
    printf("Nhap gia tri cho mang:\n");
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
}

// Ham in mang theo ma tran
int in_mang(int **mang, int n, int m) {
	int i = 0;
	int j = 0;
    printf("Mang vua nhap:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}

// Ham in cac phan tu o goc
int in_goc(int **mang, int n, int m) {
    printf("Cac phan tu o goc:\n");
    printf("%d %d\n", mang[0][0], mang[0][m - 1]);
    printf("%d %d\n", mang[n - 1][0], mang[n - 1][m - 1]);
}

// Ham in duong bien
int in_duong_bien(int **mang, int n, int m) {
    printf("Cac phan tu tren duong bien:\n");
    // Dong dau
    int j = 0;
    for (j = 0; j < m; j++) printf("%d ", mang[0][j]);
    printf("\n");
    // Cac dong giua
    int i = 1;
    for (i = 1; i < n - 1; i++) {
        printf("%d ", mang[i][0]);
        for (j = 1; j < m - 1; j++) printf("0 ");
        printf("%d\n", mang[i][m - 1]);
    }
    // Dong cuoi
    if (n > 1) {
        for (j = 0; j < m; j++) printf("%d ", mang[n - 1][j]);
        printf("\n");
    }
}

// Ham in duong cheo
int in_duong_cheo(int **mang, int n, int m) {
	int i = 0;
	int j = 0;
    printf("Cac phan tu tren duong cheo:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == j || i + j == m - 1)
                printf("%d ", mang[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

// Ham in so nguyen to
int in_so_nguyen_to(int **mang, int n, int m) {
	int i = 0;
	int j = 0;
    printf("Cac so nguyen to trong mang:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (la_so_nguyen_to(mang[i][j]))
                printf("%d ", mang[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

// Giai phong bo nho
int giai_phong(int **mang, int n) {
	int i = 0;
    for (i = 0; i < n; i++) {
        free(mang[i]);
    }
    free(mang);
}

// Ham main
int main() {
    int n, m, lua_chon;
    int i = 0;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int **mang = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        mang[i] = (int *)malloc(m * sizeof(int));
    }

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1: nhap_mang(mang, n, m); break;
            case 2: in_mang(mang, n, m); break;
            case 3: in_goc(mang, n, m); break;
            case 4: in_duong_bien(mang, n, m); break;
            case 5: in_duong_cheo(mang, n, m); break;
            case 6: in_so_nguyen_to(mang, n, m); break;
            case 7: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (lua_chon != 7);

    giai_phong(mang, n);
    return 0;
}

