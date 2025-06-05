#include <stdio.h>
#include <string.h>

// Khai bao cau truc SinhVien
struct SinhVien {
    char ten[50];
    int tuoi;
    char soDienThoai[15];
};

int main() {
    // Khai bao bien
    struct SinhVien sv;

    // Nhap thong tin sinh vien
    printf("Nhap ten sinh vien: ");
    fgets(sv.ten, sizeof(sv.ten), stdin);
    sv.ten[strcspn(sv.ten, "\n")] = 0; // Xoa ky tu xuong dong

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.tuoi);
    getchar(); // Xoa ky tu xuong dong con lai

    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv.soDienThoai, sizeof(sv.soDienThoai), stdin);
    sv.soDienThoai[strcspn(sv.soDienThoai, "\n")] = 0;

    // In thong tin sinh vien
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s\n", sv.ten);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("So dien thoai: %s\n", sv.soDienThoai);

    return 0;
}

