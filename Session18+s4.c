#include <stdio.h>
#include <string.h>

#define MAX 50 

// Khai bao cau truc SinhVien
struct SinhVien {
    int id;
    char ten[50];
    int tuoi;
    char soDienThoai[15];
};

int main() {
    struct SinhVien danhSach[MAX];
    int soSinhVien = 5; 

    // Nhap thong tin sinh vien
    int i = 0;
    for (i = 0; i < soSinhVien; i++) {
        danhSach[i].id = i + 1; // Tu dong tang ID

        printf("Nhap thong tin sinh vien thu %d:\n", danhSach[i].id);

        printf("Nhap ten: ");
        fgets(danhSach[i].ten, sizeof(danhSach[i].ten), stdin);
        danhSach[i].ten[strcspn(danhSach[i].ten, "\n")] = 0;

        printf("Nhap tuoi: ");
        scanf("%d", &danhSach[i].tuoi);
        getchar(); // Xoa ky tu xuong dong con lai

        printf("Nhap so dien thoai: ");
        fgets(danhSach[i].soDienThoai, sizeof(danhSach[i].soDienThoai), stdin);
        danhSach[i].soDienThoai[strcspn(danhSach[i].soDienThoai, "\n")] = 0;
    }

    // In danh sach sinh vien
    printf("\nDanh sach sinh vien:\n");
    for (i = 0; i < soSinhVien; i++) {
        printf("ID: %d\n", danhSach[i].id);
        printf("Ten: %s\n", danhSach[i].ten);
        printf("Tuoi: %d\n", danhSach[i].tuoi);
        printf("So dien thoai: %s\n", danhSach[i].soDienThoai);
        printf("-------------------------\n");
    }

    return 0;
}

