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

void xoa_sinh_vien(int id, SinhVien sv[], int *do_dai_hien_tai) {
    int vi_tri = -1;
    int i = 0;
    for (i = 0; i < *do_dai_hien_tai; i++) {
        if (sv[i].id == id) {
            vi_tri = i;
            break;
        }
    }

    if (vi_tri == -1) {
        printf("Khong tim thay sinh vien co ID %d!\n", id);
        return;
    }

    for (i = vi_tri; i < (*do_dai_hien_tai - 1); i++) {
        sv[i] = sv[i + 1];
    }

    (*do_dai_hien_tai)--;

    printf("Sinh vien co ID %d da bi xoa.\n", id);
}

int main() {
    SinhVien sv[MAX_SINH_VIEN] = {
        {1, "Nguyen Van Anh", 20, "0123456789"},
        {2, "Le Thi Bich", 21, "0987654321"},
        {3, "Tran Van Cuong", 22, "0765432109"},
        {4, "Pham Van Dungx", 23, "0345678901"},
        {5, "Hoang Thi Eng", 19, "0567890123"}
    };

    int do_dai_hien_tai = MAX_SINH_VIEN;

    in_sinh_vien(sv, do_dai_hien_tai);

    int id_xoa;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d", &id_xoa);

    xoa_sinh_vien(id_xoa, sv, &do_dai_hien_tai);

    in_sinh_vien(sv, do_dai_hien_tai);

    return 0;
}

