#include <stdio.h>
#include <string.h>

#define MAX_SINH_VIEN 5

typedef struct {
    int id;
    char ten[50];
    int tuoi;
    char so_dien_thoai[15];
} SinhVien;

void in_sinh_vien(SinhVien sv[], int do_dai_hien_tai) {
	int i = 0;
    printf("\nDanh sach sinh vien:\n");
    for (i = 0; i < do_dai_hien_tai; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", sv[i].id, sv[i].ten, sv[i].tuoi, sv[i].so_dien_thoai);
    }
}

void sap_xep_sinh_vien(SinhVien sv[], int do_dai_hien_tai) {
	int i = 0;
	int j;
    for (i = 0; i < do_dai_hien_tai - 1; i++) {
        for (j = i + 1; j < do_dai_hien_tai; j++) {
            if (strcmp(sv[i].ten, sv[j].ten) > 0) {
                SinhVien tam = sv[i];
                sv[i] = sv[j];
                sv[j] = tam;
            }
        }
    }
}

int main() {
    SinhVien sv[MAX_SINH_VIEN] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0765432109"},
        {4, "Pham Van D", 23, "0345678901"},
        {5, "Hoang Thi E", 19, "0567890123"}
    };

    int do_dai_hien_tai = MAX_SINH_VIEN;

    printf("Danh sach sinh vien truoc khi sap xep:\n");
    in_sinh_vien(sv, do_dai_hien_tai);

    sap_xep_sinh_vien(sv, do_dai_hien_tai);

    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    in_sinh_vien(sv, do_dai_hien_tai);

    return 0;
}

